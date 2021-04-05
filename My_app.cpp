#include "My_app.h"
//#include "My.h"
#include "Ur.h"

using namespace std;

//My_app::My_app(My *parent) : My(parent) {};

void My_app::buildTree()
{
	string parr_name, chil_name;
	cin >> parr_name;
	setName(parr_name);

	C_parr = this;
	do {
		cin >> parr_name >> chil_name;

		if (parr_name == chil_name) return;
		if (parr_name != C_chil->getName())
		{
			if (parr_name == C_chil->getName()) {
				C_parr = C_chil;
			}
			else continue;

		}
		C_chil = new Ur(C_parr, chil_name);
	} while (true);
};

int My_app::exec()
{
	cout << getName() << endl;
	printName();
	return 0;
};
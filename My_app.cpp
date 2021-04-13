#include "My_app.h"
#include "Ur.h"
#include "Ur2.h"


My_app::My_app(My *parent, string name) : My(parent, name) {};

void My_app::buildTree() 
{
	string app_name, chil_name;
	cin >> app_name;
	setName(app_name);
	
	string parent, name;
	My *current_o = this;
	My *recent_o = nullptr;
	
	int i = 0;
	while (true)  {
		cin >> parent >> name;
		i++;
		if (parent == name) return;
		else {
		if (current_o->getName() == parent) 
		{
			if (i % 2) {
				recent_o = new Ur(current_o, name);
			} else {
				recent_o = new Ur2(current_o, name);
			}
		}
		else {
			if (recent_o->getName() == parent) {
				current_o = recent_o;
				if (i % 2) {
					recent_o = new Ur(current_o, name);
				} else {
					recent_o = new Ur2(current_o, name);
				}
			}
		}
			
		}
		
	}
};

int My_app::exec() 
{
	cout << getName();
	printChilds();
	return 0;
};

#include "My.h"

using namespace std;

My::My(My *parent, string name)
{
	//setParent(parent);
	//setName(name);
	this->parent = parent;
	if (parent)
	{
		parent->children.push_back(this);
	}
	this->name = name;
};

void My::setName(string name)
{
	this->name = name;
};
string My::getName() {
	return this->name;
};

void My::setParent(My *parent)
{
	this->parent = parent;
	if (parent)
	{
		parent->children.push_back(this);
	}
};
My  My::getParent()
{
	return this->parent ;
};


/*unsigned int get_count() {
	unsigned int si = children.size();
	return si;
}*/


void My::printName()
{
	if (children.empty()) return;
	cout << endl << name;

	children_iter = children.begin();
	while (children_iter != children.end())
	{
		cout << " " << (*children_iter)->getName();
		children_iter++;
	}
	children_iter--;
	(*children_iter)->printName();
};

void My::printTree(int i)
{

};

void My::showObj() {
	int i_level = 0;
	showObjNext(this, i_level);
}

void My::showObjNext(My * parent, int i_level) {
	string    s_space;
	//-------------------------------------------------
	if (i_level > 0)  s_space.append(4 * i_level, ' ');
	cout << s_space << parent->getName() << endl;

	if (parent->children.size() == 0) return;

	parent->children_iter = parent->children.begin();

	while (parent->children_iter != parent->children.end()) {

		showObjNext((My*)(*(parent->children_iter)), i_level + 1);
		parent->children_iter++;
	}
}

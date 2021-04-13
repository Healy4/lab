#include "My.h"


My::My(My* parent, string name) 
{
	myParent = parent;
	myName = name;
	if (myParent) {
		myParent->addChild(this);
	}
};

My::~My()
{
	for (auto child : children) {
		delete child;
	}
};
//---------------------------------------

void My::addChild(My* child) 
{
	children.push_back(child);
};

void My::setName(string name)
{
	myName = name;
};

string My::getName() {
	return myName;
};

void My::setParent(My *parent)
{
	myParent = parent;
};

My* My::getParent()
{
	return myParent;
};

void My::printChilds()
{
	if (!children.empty()) 
	{
		cout << "\n" << getName();
		for (auto s : children) {
			cout << "  " << s->getName();
		}
		for (auto s : children) {
			s->printChilds();
		}
	}
};

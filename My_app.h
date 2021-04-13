#ifndef MY_APP_H
#define MY_APP_H
#include "My.h"

class My_app : public My 
{
	public:
		My_app(My *parent, string name = "Default");
		void buildTree();
		int exec();
};
#endif

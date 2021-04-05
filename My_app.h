#ifndef MY_APP_H
#define MY_APP_H
#include "My.h"

class My_app : public My
{
public:
	My_app();
	void buildTree();
	int exec();
private:
	My *C_parr;
	My *C_chil;
};
#endif
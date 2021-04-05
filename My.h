#ifndef MY_H
#define MY_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class My
{
public:

	My(My* parent = 0, string = "Base");

	void   setName (string); //��������� ���
	string getName (); //�������� ���

	void setParent   (My *obj); //��������� ��������
	My   getParent   (); //�������� ��������

	void delChild(My *p_child);
	void addChild(string obj_name);

	void printName(); //
	//void exec();

	//unsigned int get_count(); //���-�� �����

	void printTree(int i_level = 0); //��������� ������ ��������
	void showObj();
	void showObjNext(My * parent, int i_level);
	//~My();

	vector <My*> children;
	vector <My*>::iterator children_iter;
private:
	string name;
	My *parent;



};
#endif
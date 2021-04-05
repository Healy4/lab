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

	void   setName (string); //Назначить имя
	string getName (); //Получить имя

	void setParent   (My *obj); //Назначить родителя
	My   getParent   (); //Получить родителя

	void delChild(My *p_child);
	void addChild(string obj_name);

	void printName(); //
	//void exec();

	//unsigned int get_count(); //кол-во детей

	void printTree(int i_level = 0); //построить дерево объектов
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
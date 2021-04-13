#ifndef MY_H
#define MY_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;
class My
{
	public:
	
		My(My* parent, string name = "Unknown");
		~My();
		
		void setName(string name); //Назначить имя
		string getName(); //Получить имя
		
		void setParent(My* parent); //Назначить родителя
		My* getParent(); //Получить родителя
		
		void addChild(My* child); //Назначить ребенка
		//My*  getChild(); //Получить ребенка
		//bool hasChild() const;
		
		void printChilds(); //Вывод всех дочерних объектов	
		
		//unsigned int get_count(); //кол-во детей
		//void printTree(int i_level = 0); //построить дерево объектов
		My* searchObj(string name);
	private:
	
		string myName;
		My *myParent;
		
		vector <My*> children;
		
};
#endif

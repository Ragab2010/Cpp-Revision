/*
 * main.cpp
 *
 *  Created on: Aug 25, 2021
 *      Author: ragab
 */


#include <iostream>
#include <cstring>
using namespace std;

class Human{
private :
	int age;

	char *name;
public :
	Human(int age_=0 ,char* name_ ="none");
	Human(const Human &pt);
	Human& operator=(const Human &pt);
	 operator int();
	~Human();
	void printAge();
	void printName();
	void printAll();

};
 void Human::printAge(){

	cout<<"age  is :"<<age<<endl;

}
void Human::printName(){
	cout<<"name is :"<<name<<endl;

}
inline void Human::printAll(){
	printAge();
	printName();
}


Human::operator int(){
	return age;
}

Human::Human(int age_ , char* name_){
	cout<<"constructor   of :"<<name_<<endl;
	name = new char[strlen(name_)+1];
	age= age_;
	strcpy(name , name_);
}

Human::~Human(){
	cout<<"Deconstructor of :"<<name<<endl;
	delete [] name;

}
//copy constructor
Human::Human(const Human &pt){
	cout<<"this copy constructor for new obj by:"<<pt.name<<endl;
	int len = strlen(pt.name);
	name = new char(len+1);
	strcpy(name , pt.name);
	age = pt.age;
}
Human& Human::operator=(const Human &pt){
	cout<<"this assignment operator exist obj by:"<<pt.name<<endl;
	if(this == &pt){
		return *this;
	}else{
		delete [] name;
		int len = strlen(pt.name);
		this->name = new char(len+1);
		strcpy(this->name , pt.name);
		return *this;
	}
}

int main(){
	Human reda(26 , "REDA"); // implicit new reda object
	Human ahmed = reda;      //new ahmed object and call copy constuctor
	Human sayed = Human(23 , "Sayed"); // explicit create new sayed object
	reda.printAll();
	ahmed.printAll();
	sayed = ahmed;      //invoke assignement operator function  to copy data from ahmed to sayed objects
	sayed.printAll();


	return 0;
}

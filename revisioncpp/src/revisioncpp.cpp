//============================================================================
// Name        : revisioncpp.cpp
// Author      : RAGAB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Human{
private :
	int age;

	string name;
public :
	Human(string name_ ="none");
	 Human(double ss);
	//Human(int ss);
	//Human(short ss);
	 operator int();
	~Human();
	void printAge();
	void printName();
	void printAll();

};
 inline void Human::printAge(){

	cout<<"age  is :"<<age<<endl;

}
void Human::printName(){
	cout<<"name is :"<<name<<endl;

}
inline void Human::printAll(){
	printAge();
	printName();
}


//Human::Human(short ss){
//	cout<<"constructor short  "<<endl;
//	age=ss;
//	name="none";
//}
//
//Human::Human(int ss){
//	cout<<"constructor int  "<<endl;
//	age=ss;
//	name="none";
//}
Human::Human(double ss_){
	cout<<"constructor double  "<<endl;
	age=(int)ss_;
	name="none";
}
Human::operator int(){
	return age;
}

Human::Human(string name_){
	cout<<"constructor   of :"<<name_<<endl;
	age= 0;
	name=name_;
}

Human::~Human(){
	cout<<"Deconstructor of :"<<name<<endl;

}


int main() {
	//Human("hany without variable object");
	//Human ahmed= Human("ahmed");//explicit call constructor
//	Human ramy;         //implicit call constructor
	//Human *pTamer = new Human("Tamer");//pointer point to object Human(29 , "Tamer")
	//ahmed.printAll();
//	ramy.printAll();
//	pTamer->printAll
	Human a = 17;
	int x = a;
	cout<<x<<endl;

	return 0;
}



/*
 * main.cpp
 *
 *  Created on: Aug 25, 2021
 *      Author: ragab
 */

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
	string name;
	const char blood ;
public :
	Human(int age_=0 ,string  name_ ="none");
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

Human::Human(int age_ , string name_): age(age_) , name(name_) ,blood('B') {

}

Human::~Human(){
	cout<<"Deconstructor of :"<<name<<endl;


}
//copy constructor
Human::Human(const Human &pt):Human(){
	cout<<"this copy constructor for new obj by:"<<pt.name<<endl;
	name = string(pt.name);
	age = pt.age;
}
Human& Human::operator=(const Human &pt){
	cout<<"this assignment operator exist obj by:"<<pt.name<<endl;
	if(this == &pt){
		return *this;
	}else{
		name = string(pt.name);
		age = pt.age;
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


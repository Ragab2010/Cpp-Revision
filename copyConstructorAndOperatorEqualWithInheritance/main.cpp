/*
 * main.cpp
 *
 *  Created on: Aug 26, 2021
 *      Author: ragab
 */



#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	int id;
	char *name;
public :
	Person( char * pname  , int id_){
		int len = strlen(pname);
		name = new char[len+1];
		strcpy(name , pname);
		id = id_;
		cout<<"constructor of base Class name:"<<name<<endl;

	}
	//copy constructor
	Person(const Person & pt){
		int len = strlen(pt.name);
		name = new char[len+1];
		strcpy(name , pt.name);
		id = pt.id;
		cout<<"copy constructor of base Class name:"<<name<<endl;


	}
	//operator=
	Person & operator=(const Person &pt){
		if(this == &pt)
			return *this;
		int len = strlen(pt.name);
		name = new char[len+1];
		strcpy(name , pt.name);
		id = pt.id;
		cout<<"operator= of base Class name:"<<name<<endl;
		return *this;

	}
	virtual void printAtt(){
		cout<<"printAtt of base Class name:"<<name<<endl;
		cout<<"name is :"<<name<<endl;
		cout<<"id   is :"<<id<<endl;

	}
	virtual ~Person(){
		cout<<"Deconstructor of base Class name:"<<name<<endl;
		delete [] name;
	}
};

class Player:public Person{
private:
	int speed;
public :
	Player( char * name ,  int id , int speed_)
		:Person(name , id), speed(speed_){
		cout<<"constructor of sub Class name:"<<endl;

	}
	Player(const Player &pt ):Person(pt){
		cout<<"copy constructor of sub Class name:"<<endl;
		speed = pt.speed;
	}
	Player& operator=(const Player &pt){
		cout<<"operator= of sub Class name:"<<endl;
		if(this == &pt)
			return *this;
		Person::operator =(pt);
		speed = pt.speed;
		return *this;
	}

 void printAtt(){
		cout<<"printAtt of sub Class name:"<<endl;


	}
 ~Player(){
		cout<<"Deconstructor of sub Class name:"<<endl;

	}
};

int main(){
	Player ahmed("Ahmed" , 1 , 9);
	Player reda( "reda" , 2  , 8);
	cout<<"----------------copy constructor invoking----------------------"<<endl;
	Player ramy=ahmed;
	cout<<"----------------End copy constructor invoking------------------"<<endl;
	cout<<"----------------operator= invoking-----------------------------"<<endl;
	ramy = reda;
	cout<<"----------------End operator= invoking-------------------------"<<endl;
	return 0;
}


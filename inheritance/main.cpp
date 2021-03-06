/*
 * main.cpp
 *
 *  Created on: Aug 26, 2021
 *      Author: ragab
 */

#include <iostream>
using namespace std;

class shape{
private :
	int length;
	int width;
public :
	shape(int length=0 , int width=0){
		this->length = length ;
		this->width = width;
	}
	shape(const shape &pt){
		cout<<"this is copy constructor of shape class"<<endl;
		this->length = pt.length ;
		this->width = pt.width;
	}
	shape& operator=(const shape &pt){
		cout<<"this is overloaded operator= of shape class"<<endl;
		if(this == &pt)
			return *this;
		this->length = pt.length ;
		this->width = pt.width;
		return *this;
	}
	virtual void printArea()=0;

	virtual~shape(){
		cout<<"deconstructor of shape class"<<endl;
	}
};

class rect:public shape{
private:
	int area;
public :
	rect( int length=0 , int width=0 , int area=0):shape(length , width){
		this->area = area;
	}
	void printArea(){
		cout<<"rect :the Area="<<endl;
	}
	~rect(){
		cout<<"deconstructor of rect class"<<endl;
	}
};


/*******function to call printArea**********/

void printobj(shape & p){
	p.printArea();
}
int main(){
	rect a(3,2,0);
	shape &ps= a;
	printobj(a);


	return 0;
}

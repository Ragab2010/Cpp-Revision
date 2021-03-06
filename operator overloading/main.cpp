/*
 * main.cpp
 *
 *  Created on: Aug 23, 2021
 *      Author: ragab
 */
#include <iostream>
using namespace std;

class Number{
private :
	int value;
public :
	Number(int value_ =0);
	Number operator+(Number &pt);
	Number operator+(int val);

	void printValue();
	operator int(){
		return value;
	}
	operator double(){
		return value;
	}


	friend Number operator+(int val , Number &pt);
};


Number::Number(int value_){
	value = value_;
}

Number Number::operator+(Number &pt){
	Number copy;
	copy.value= value + pt.value;
	return copy;
}

Number Number::operator+(int val){
	Number copy;
	copy.value= value + val;
	return copy;
}
void Number::printValue(){
	cout<<"the value is:"<<value<<endl;
}

Number operator+( int val , Number &pt){
	Number copy;
	copy.value= pt.value + val;
	return copy;
}

int main(){
	Number a=10  ,b=10;
	Number sum_overload_operatorAsMember = a+5;
	Number sum_overload_operatorAsFrined = 9+a;
	sum_overload_operatorAsMember.printValue();
	sum_overload_operatorAsFrined.printValue();
	long i =(int) a;
	cout<<i<<endl;

	return 0;
}


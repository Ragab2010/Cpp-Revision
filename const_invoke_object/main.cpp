/*
 * main.c
 *
 *  Created on: Aug 23, 2021
 *      Author: ragab
 */
#include<iostream>
using namespace std;

class Number{
private:
	int value;
public:
	Number( int val=0){
		value = val;
	}
	void print(){
		cout<<value<<endl;
	}
	void change(int newVal)const{
		//value= newVal;  // cannot change value
	}

};


int main(){
	Number  a(456);
	a.print();
	//a.change(95);
	a.print();

	return 0;
}

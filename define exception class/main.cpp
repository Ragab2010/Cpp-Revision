/*
 * main.cpp
 *
 *  Created on: Aug 31, 2021
 *      Author: ragab
 */


#include <iostream>

using namespace std;

class Bad{
private:
	int value;
	string msg;
public:
	Bad(string msg_ , int value_):value(value_) , msg(msg_){}
	void printMsg(){
		cout<<"the value is :"<< value<<endl;
		cout<<"msg:"<<msg<<endl;

	}
};
int checkNumber(int i){
	if(i<0)
		throw Bad("the Number is smaller than Zero" , i);
	return 1;
}

int main(){
	int a;
	cin>>a;
	try {
		checkNumber(a);
	} catch (Bad &p) {
		p.printMsg();
		abort();
	}


	return 0;
}


/*
 * main.cpp
 *
 *  Created on: Aug 31, 2021
 *      Author: ragab
 */

#include <iostream>

using namespace std;

int checkNumber(int i){
	if(i<0)
		throw"the Number is behind Zero";
	return 1;
}

int main(){
	int a;
	cin>>a;
	try {
		checkNumber(a);
	} catch (const char *p) {
		cout<<p<<endl;
		abort();
	}


	return 0;
}

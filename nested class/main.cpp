/*
 * main.cpp
 *
 *  Created on: Aug 30, 2021
 *      Author: ragab
 */

#include <iostream>
using namespace std;

typedef  int  Item;
#define N 10

class Queue{
public:
	class Node{
	public:
		Item item;
	};
	Node q[N];
	int size;
public :

	void printqueue();
	void insertArray( Item *ta , int size);

};
void Queue::insertArray( Item *ta , int size){
	for (int var = 0; var < size; ++var) {
		q[var].item=ta[var];
		size++;
	}
}
void Queue::printqueue( ){
	for (int var = 0; var < size; ++var) {
		cout<<"item 0 : "<<q[var].item<<endl;
	}
}


int main(){
	Item a[5]= {1,2,3,4,5};
	Queue ff();
	ff.




	return 0;
}


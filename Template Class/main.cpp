/*
 * main.cpp
 *
 *  Created on: Aug 29, 2021
 *      Author: ragab
 */


#include <iostream>
using namespace std;

template <class T  , int n>
class ArrayTP{
private:
	T arr[n];
	int occSize;
public:
	ArrayTP(T *pr , int size){
		for (int i = 0; i < n; ++i) {
			arr[i] = pr[i];
		}
		occSize= size;
	}
	void printData()const{
		for (int i = 0; i < occSize; ++i) {
			cout << "arr["<<i<<"]: "<<arr[i]<<endl;
		}
	}


};
int main(){
	cout<<"------------------Create ArrayTP Object---------------------"<<endl;
	int a[6] = {1,2,3,4,5,6};
	ArrayTP<int , 15> dyArr(a , 6);
	cout<<"-----------------print data ofArrayTP ---------------------"<<endl;
	dyArr.printData();

	return 0;
}



/*
 * main.cpp
 *
 *  Created on: Aug 29, 2021
 *      Author: ragab
 */

#include <iostream>
#include <valarray>
using namespace std;

//valarray<int>  is the variable legth array
typedef valarray<int> VALARRAY;

//Private version Student
class StudentPrivateVersion:private string , private VALARRAY{
public :
	StudentPrivateVersion(  string name , const int *pArrayScore  ,int sizeOfArrayScore):
		string(name) , VALARRAY(pArrayScore , sizeOfArrayScore){

	}
	void average ()const{
		cout <<"the average is :"<<VALARRAY::sum()/VALARRAY::size()<<endl;
	}
	void printName(){
		cout<<"the name is :"<<(string (*this))<<endl;
	}


};
// Compsition version Student
class StudentCompsitionVersion{
private :
	string name ;
	VALARRAY score;
public :

	StudentCompsitionVersion(  string name_ , const int *pArrayScore  ,int sizeOfArrayScore):
		name(name_) , score(pArrayScore , sizeOfArrayScore){

	}
	void average ()const{
		cout <<"the average is :"<<score.sum()/score.size()<<endl;
	}
	void printName(){
		cout<<"the name is :"<<name<<endl;
	}


};



int main(){
	int arr[]={1,2,3,4,5};
	cout<<"---------------------private inheritance Version-------------------"<<endl;
	StudentPrivateVersion a("Ramy", arr, 5);
	a.average();
	a.printName();
	cout<<"-----------------------Compsition Version--------------------------"<<endl;
	StudentCompsitionVersion b("Ragab", arr, 5);
	a.average();
	a.printName();


	//valarray<int> q ={1,2,3,4};




	return 0;
}

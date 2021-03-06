/*
 * main.cpp
 *
 *  Created on: Aug 29, 2021
 *      Author: ragab
 */

//
//#include <iostream>
//using namespace std;
//
///***********level1*************/
//
//class Worker{
//private:
//	string name;
//	int id;
//public :
//	Worker( string name_ , int id_ ):name(name_), id(id_){
//		cout<<"Constructor of Worker class"<<endl;
//	}
//	virtual ~Worker(){
//		cout<<"Deconstructor of Worker class"<<endl;
//	}
//
//	void showData(){
//		cout<<"name is :"<< name << "id is :"<<id << endl;
//	}
//
//};
///*************level2***********/
//class Singer: public Worker{
//private:
//	int voiceScore;
//public :
//	Singer( string name_ , int id_  , int voiceScore_): voiceScore(voiceScore_),Worker(name_ , id_){
//		cout<<"Constructor of Singer class"<<endl;
//	}
//	virtual ~Singer(){
//		cout<<"Deconstructor of Singer class"<<endl;
//	}
//
//};
//class Waiter:public Worker{
//private:
//	int score;
//public :
//	Waiter( string name_ , int id_  , int score_): score(score_),Worker(name_ , id_){
//		cout<<"Constructor of Waiter class"<<endl;
//	}
//	virtual ~Waiter(){
//		cout<<"Deconstructor of Waiter class"<<endl;
//	}
//};
///***********level3***************/
//class waiterSinger: public Waiter , public Singer{
//private:
//
//public :
//	waiterSinger( string name_ , int id_  , int score_):
//		Waiter(name_, id_, score_) , Singer(name_, id_, score_){
//		cout<<"Constructor of waiterSinger class"<<endl;
//	}
//	virtual ~waiterSinger(){
//		cout<<"Deconstructor of waiterSinger class"<<endl;
//	}
//};
//
//int main(){
//	cout<<"------------------Create waiterSinger Object---------------------"<<endl;
//	waiterSinger ahmed("Ahmed" , 1 , 25);
//	cout<<"-----------------Destroy waiterSinger Object---------------------"<<endl;
//
//
//
//	return 0;
//}


/*****************Virtual base class*****************/


#include <iostream>
using namespace std;

/***********level1*************/

class Worker{
private:
	string name;
	int id;
public :
	Worker( string name_ , int id_ ):name(name_), id(id_){
		cout<<"Constructor of Worker class"<<endl;
	}
	virtual ~Worker(){
		cout<<"Deconstructor of Worker class"<<endl;
	}

	void showData(){
		cout<<"name is :"<< name << "id is :"<<id << endl;
	}

};
/*************level2 with virtual keyword***********/
class Singer: virtual  public Worker{
private:
	int voiceScore;
public :
	Singer( string name_ , int id_  , int voiceScore_):
		voiceScore(voiceScore_),Worker(name_ , id_){
		cout<<"Constructor of Singer class"<<endl;
	}
	virtual ~Singer(){
		cout<<"Deconstructor of Singer class"<<endl;
	}

};
class Waiter: virtual public Worker{
private:
	int score;
public :
	Waiter( string name_ , int id_  , int score_): score(score_),Worker(name_ , id_){
		cout<<"Constructor of Waiter class"<<endl;
	}
	virtual ~Waiter(){
		cout<<"Deconstructor of Waiter class"<<endl;
	}
};
/***********level3 ***************/
class waiterSinger: public Waiter , public Singer{
private:

public ://here we invoke the Constructor of Worker also form Level3 inheritance
	waiterSinger( string name_ , int id_  , int score_):
		 Singer(name_, id_, score_),Waiter(name_, id_, score_) ,Worker(name_, id_) {
		cout<<"Constructor of waiterSinger class"<<endl;
	}
	virtual ~waiterSinger(){
		cout<<"Deconstructor of waiterSinger class"<<endl;
	}
};

int main(){
	cout<<"------------------Create waiterSinger Object---------------------"<<endl;
	waiterSinger ahmed("Ahmed" , 1 , 25);
	cout<<"-----------------Destroy waiterSinger Object---------------------"<<endl;



	return 0;
}


/*
 * main.cpp
 *
 *  Created on: Aug 30, 2021
 *      Author: ragab
 */
#include <iostream>
using namespace std;

class Tv;// forward declaration



class Remote
{
public:
	enum State{Off, On};

private:
	int mode;
public:
	Remote(int m = 1) : mode(m) {}
	void set_chan(Tv & t, int c);

};




/*****************************/

 class Tv
 {
 private:
 	int state;
 	int volume;
 	int maxchannel;
 	int channel;
 	int mode;
 	int input;
 public:
 	friend void Remote::set_chan(Tv & t, int c);

 };
// the set_chan define here before the  class Tv to can see the arributes and methods of Tv & t from class declaration
 void Remote::set_chan(Tv & t, int c) {
	 cout<<"set channel"<<endl;
	 t.channel = c;
 }



int main(){
	Tv a;
	Remote r(15);
	r.set_chan(a, 15);

	return 0;
}

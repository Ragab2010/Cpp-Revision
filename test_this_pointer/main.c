/*
 * main.c
 *
 *  Created on: Aug 22, 2021
 *      Author: ragab
 */
#include <stdio.h>
typedef struct human {
	int age;
	char name[40];
	void (*print)();
}Human;

void print(const Human * this ){
	printf("age is:%d\nname is:%s\n"  , this->age , this->name);
}
int main(){
	Human ahmed = {1,"ramy" };
	//ahmed.print();
	print(&ahmed);



	return 0;
}


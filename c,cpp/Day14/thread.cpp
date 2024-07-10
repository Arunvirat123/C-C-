#include<stdio.h>
#include<iostream>
#include<thread>
using namespace std;

void func()
{
	cout <<"function \n";
}
int main()
{
	thread t1(func);
	
	printf("Hello World");
	 t1.join();
	 
	 return 0;
}

#include<iostream>
#include<unistd.h>
#include<fstream>
using namespace std;
int main()
{
	cout<<"process id: " <<getpid() << endl;
	
	if (fork())
	{
		for(int i = 0;i <5;i ++)
		{
			cout<<"child \n";
			sleep(1);
		}
	}
	else
	{
		for(int i = 1; i<5; i++)
		{
			cout<<"parent \n";
			sleep(1);
		}
	}
	
}

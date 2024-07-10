#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"Try block \n";
		throw "error";
	}
	catch(...)
	{
		cout<<"catch block \n";
	}
	return 0;
}

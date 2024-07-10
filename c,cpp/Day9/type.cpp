#include<typeinfo>
#include<iostream>
using namespace std;

int main()
{
	int x =5;
	const int y = 5;
	int*p1 = &x;
	int *const p2 =&x;
	const int *p3 = &x;
	cout <<typeid(x).name() << endl;
	cout <<typeid(y).name() << endl;
	cout <<typeid(p1).name() << endl;
	cout <<typeid(p2).name() << endl;
	cout <<typeid(p3).name() << endl;
}

#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;
class compare
{
public:
	bool operator()(int x,int y)
	{
	return x>y;

	}
};
int add(int a,int b,int c)
{
	cout<<"a="<<a
	<<"b="<<b
	<<"c="<<c
	<<endl;
	return a+b;
}
int main()
{
	function<int(int,int)>obj1=bind(add,placeholders::_1,placeholders::_2,0);
	function<int(int,int)>obj2=bind(add,placeholders::_2,placeholders::_1,5);
	cout<<obj1(4,9);
	cout<<obj2(9,4);
}




















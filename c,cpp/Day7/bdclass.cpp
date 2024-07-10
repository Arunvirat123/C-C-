#include<iostream>
using namespace std;

class base1
{
public: base1()
	{
	cout<<"base 1 constructor\n";
	}
};
class base2
{
public : base2()
	{
	cout <<"base2 constructor\n";
	}
};
class derived : public base1, public base2
{
public : derived()
	{
	cout<<"derived\n";
	}
};
int main()
{
derived obj;
return 0;
}


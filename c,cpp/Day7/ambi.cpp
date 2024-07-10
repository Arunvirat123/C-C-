#include<iostream>
using namespace std;

class base1
{
public: 
void display()
	{
	cout<<"base 1 display\n";
	}
};
class base2
{
public :
void display ()
	{
	cout <<"base 2 display\n";
	}

};
class derived : public base1, public base2
{
};
int main()
{
derived obj;
obj.base1::display();
obj.base2::display();
return 0;
}


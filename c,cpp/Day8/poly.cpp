#include<iostream>
using namespace std;

class Base
{
	protected: int bdata;
	public:
	Base(int x)
	{
		bdata = x;
	}
	void display()
	{
		cout<<"\n Base display "<<endl;
		cout<<"bdata = "<<bdata<<endl;
	}
};
class  Derived : public Base
{
	private: int ddata;
	public :
	Derived(int x,int y) : Base (x)
	{
		ddata = y;
	}
	void display()
	{
		cout<<"\n Derived display"<<endl;
		cout<<"bdata = "<<bdata<<endl;
		cout<<"ddata = "<<ddata<<endl;
	}
};

int main()
{
Base bObj(5);
Derived dObj(2,4);

bObj.display();
dObj.display();

bObj = dObj;
bObj.display();

dObj = bObj;
dObj.display();

return 0;
} 

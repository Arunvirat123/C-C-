#include<iostream>
#include<type_traits>
using namespace std;
class base
{
	protected:
		int bdata;
		int x;
	public:
		base(int x)
		{
		bdata=x;
		}
	virtual void display()
		{
		cout<<"bdata ="<<bdata<<endl;
		}
};
class derived : public base
{
	private:
		int ddata;
	public:
		derived(int x,int y):base(x)
		{
			ddata = y;
		}
		void display()
		{
		cout<<"bdata="<<bdata<<endl;
		cout<<"ddata="<<ddata<<endl;
		}
};
void func(base &bref)
{
	bref.display();
}
int main()
{
	base bobj(5);
	derived dobj(2,4);
	cout<<"size of base:"<<sizeof(base)<<endl;
	cout<<"size of derived:"<<sizeof(derived)<<endl;
	func(bobj);
	func(dobj);
}
		

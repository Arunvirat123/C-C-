 #include <iostream>
 using namespace std;

 class Base
{	protected : int bdata;
	public :
	Base(int x )
	{
        bdata = x;
    }
	virtual  void display()
	{
	    cout<<"\n BASE DISPLAY "<<endl;
	    cout<<"bdata = "<<bdata<<endl;
    }
};

class Derived : public Base
{
    private: int ddata;
    public :
    Derived(int x ,int y ) : Base(x)
    {
        ddata = y;
    }
	void display()
	{
		cout<<"\n DERIVED DISPLAY "<<endl;
		cout<<"bdata = "<<bdata<<endl;
		cout<<"ddata = "<<ddata<<endl;
	}
};

 int main()
{
	Base	*ptrBase, bObj(5);
	Derived	dObj(2,4);

	ptrBase = &bObj;
	ptrBase->display();

	ptrBase = &dObj;
	ptrBase->display();

	return 0;
}



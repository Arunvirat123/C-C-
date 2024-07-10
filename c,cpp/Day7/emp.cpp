#include <iostream>
using namespace std;

class employee
{
public:
	employee()
	{
	cout<<"constructor : employee (base)"<<endl;
	}
	~employee()
	{
	cout<<"destructor : employee (base)"<<endl;
	}
};
class salariedemployee : public employee
{
public:
	salariedemployee()
	{
	cout<<"constructor : salaried employee (derived)"<<endl;
	}
	~salariedemployee()
	{
	cout<<"destructor : salaried employee (derived)"<<endl;
	}
};
int main()
{
	salariedemployee obj;
	cout << endl;
	return 0;
}

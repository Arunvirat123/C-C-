#include<iostream>
using namespace std;

class employee
{
public:
	employee(int id)
	{
	cout<<"employee constructor : id = "<<id<<endl;
	}
};
class salaried_employee : public employee
{
public:
	salaried_employee(int id, int sal) :   employee(id)
	{
	cout<<"salaried employee constructor : salary "<<sal<<endl;
	}
};
int main()
{
	salaried_employee obj(1,6000);
	return 0;
}


#include <iostream>

using namespace std;

class Employee
{
	private:int id;
		char name[20];
	public:void readEmpdetails();
		void printEmpdetails();
};
class SalariedEmployee:: publicEmployee
 {
 	private:int basic,HRA,DA;
 	public:void readsalEmpdetails();
		void printsalEmpdetails();
};
int main()
{
		SalariedEmployee obj;
		obj.readEmpdetails();
		obj.readsalEmpdetails();
		
		obj.printEmpdetails();
		obj.printsalEmpdetails();
		
		return 0;
		
}

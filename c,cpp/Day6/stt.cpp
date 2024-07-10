#include <iostream>
using namespace std;

class Employee
{
	public:
	static int count;
		int empid;
		char empname[20];
};

int main()
{
	Employee e1 = {1,"ARUN"};
	Employee e2 = {2,"VIRAT"}; 
	
	cout << e1.empid <<" "<<e1.empname<<endl;
	cout << e2.empid <<" "<<e2.empname<<endl;
	
	cout << e1.count << endl;
	return 0;
}

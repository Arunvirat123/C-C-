#include <iostream>
using namespace std;
class Employee
{
    private : 
        int empid;
        char empname[20];
    public:
        void readEmpDetails( )
        {
            cout << "Enter the empid :";
            cin >> empid;
            cout << "Enter the name : ";
            cin >> empname;
        }
        void printEmpDetails( )
        {
            cout <<"Empid   : " << empid << endl;
            cout <<"EmpName : " << empname << endl;
        }
};

class SalariedEmployee : public Employee 
{
    private:
        int basicSalary;
        int HRA;
        int grossSalary;
    public:
        void readSalEmpDetails()
        {
            readEmpDetails();   
            cout <<"Enter the basic Salary : ";
            cin >> basicSalary;
            HRA = 40.0 / 100 * basicSalary;
            grossSalary = basicSalary + HRA;
        }
        void printSalEmpDetails()
        {
            printEmpDetails();
            cout <<"Basic Salary : " << basicSalary << endl;
            cout <<"HRA : " << HRA << endl;
            cout <<"Gross Salary : " << grossSalary << endl;
        }
};

int main()
{
    SalariedEmployee   obj;
    
    obj.readSalEmpDetails();

    obj.printSalEmpDetails();
    return 0;
}



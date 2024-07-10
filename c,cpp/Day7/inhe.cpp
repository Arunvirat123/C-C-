#include <iostream>
using namespace std;

class employee
{
	private:int id;
		char name[20];
	public :
		void readempdetails()
		{
		cout <<"enter id and name: ";
		cin >> id >> name;
		}
		void printempdetails()
		{
		cout << id << " "<<name<<" ";
		}
		
};
class salariedemployee : public employee
{
	private : int basicsalary, HRA;
	public : void readsalempdetails()
	{
	cout <<"enter basic salary :";
	cin >> basic salary;
	HRA = basicsalary * 40.0/100;
	}
	void printempdetails()
	{
	cout <<basicsalary<<" "<<HRA<<endl;
	}
int main()
{
	salariedemployee obj:
	
	cout<<sizeof (employee) <<endl;
	cout<<sizeof (salariedemployee);
	
	return 0;
	
}

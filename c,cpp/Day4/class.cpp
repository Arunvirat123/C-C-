#include <iostream>
using namespace std;
class student
{
private:
	int regno;
	char name[20];
public:
	void readdetails();
	void printdetails();
};
void student :: readdetails()
	{
		cout <<"this = "<< this << endl;
		cout <<"enter the reg no : ";
		cin >> regno;
		cout <<"enter the name : ";
		cin >> name;
	}
void student :: printdetails()
	{
		cout <<"registration no : " << regno << endl;
		cout <<"name : " << name << endl;
	}
int main()
{
	student s1;
	student s2;
	student s3;
	cout << "&s1 : " << &s1 << endl;
	cout << "&s2 : " << &s2 << endl;
	s1.readdetails();
	s2.readdetails();
	s1.printdetails();
	s2.printdetails();
	return 0;
}

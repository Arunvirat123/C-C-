#include<iostream>
using namespace std;

class student
{
	static int count;
	int regno;
	string name;
public:
	student (string p_name);
	void display();
};
int student::count = 0;

student::student(string p_name)
{
	count++;
	regno = count;
	name = p_name;
}
void student::display()
{
	cout<<regno<<" "<< name<<endl;
}
int main()
{
	student s1("SIKANDER");
	student s2("ARUN");
	s1.display();
	s2.display();
	return 0;
}

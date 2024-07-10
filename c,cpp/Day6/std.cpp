#include<iostream>
using namespace std;

class student
{
	int regno;
	string name;
	int sem;
public:
	student (int p_regno, string p_name,int p_sem)
	{
	regno = regno;
	name = p_name;
	sem = p_sem;
	cout<<"constructor: type of this = "<<typeid(this).name()<<endl;
	}
	void display() const
	void promotetonextsemester()
	{
	sem++;
	}
};
int main()
{
	student s1 = student(1, "ARUN", 4);
	const student s2 = student(2, "VIRAT", 2);
	
	s1.promotetonextsemester();
	s2.promotetonextsemester();
	s1.display();
	s2.display();
}

#include <iostream>
using namespace std;

class Distance
{
	int feet;
	int inch;
public:
	Distance (int p_feet = 0, int p_inch = 0)
	{
		feet = p_feet;
		inch = p_inch;
	}
	void operator ++()
	{
		cout << "pre-increment operator\n";
		feet = feet + 1;
	}
	void print()
	{
		cout << feet << "\'"<<inch<<"\""<<endl;
	}
};
int main ()
{
	Distance d1(4,2);
	d1.print();
	++d1;
	d1.print();
	return 0;
}


#include <iostream>
using namespace std;
class Distance
{
	int feet;
	int inch;
	public:
		Distance()
		{
			cout <<"constructor\n";
			feet = 0;
			inch = 0;
		}
		Distance(int p_feet , int p_inch)
		{
			cout <<"constructor\n";
			feet = p_feet;
			inch = p_inch;
		}
		Distance operator+(Distance &d)
		{
		Distance temp;
		temp.feet = feet +d.feet;
		temp.inch = inch +d.inch;
		if (temp.inch >=12)
		{
			temp.inch -=12;
			temp.feet++;
		}
		return temp;
		}
		void printDistance();
};
void Distance :: printDistance()
{
	cout << feet <<"\'" << inch <<"\"" <<endl;
}
int main()
{
	Distance d1(12,3);
	Distance d2(5,9);
	Distance d3 = d1+d2;
	d3.printDistance();
	
	return 0;
}

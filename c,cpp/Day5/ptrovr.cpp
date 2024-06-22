#include <iostream>
using namespace std;

class Distance 
{
	int feet, inch;
public:
	Distance(int f=0,int i=0)
	{feet = f; inch = i;}
	
	void print() const
	{cout<<feet<<"\'"<<inch<<"\""<<endl;}
	
	bool operator < (const Distance &d) const
	{
		int x = feet * 12+inch;
		int y = d.feet *12 +d.inch;
		return x < y;
	}
};

int main()
{
	Distance d[5] = {Distance(5,7),Distance(2,3),Distance(6,5),Distance(3,7),Distance(6,9)};
	
	sort (begin(d) , end(d));
	
	for(const auto &ele : d)
		ele.print();
	return 0;
}

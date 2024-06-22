#include <iostream>
using namespace std;

class Distance
{
	int feet, inch;
public :
	Distance(int f =0,int i = 0)
	{ feet = f; inch = i;}

friend ostream & operator << (ostream &out,const Distance &d);
friend istream & operator >> (istream &in, Distance &d);
};

ostream & operator << (ostream &out,const Distance &d)
{
	cout <<d.feet<<"\'"<<d.inch<<"\""<<endl;
	return out;
}

istream & operator >> (istream &in, Distance &d)
{
	in >> d.feet >> d.inch;
	return in;
}

int main()
{
	Distance d1;
	cout <<"enter the distance in feet and inch :";
	cin >> d1;
	cout << d1 << endl;
	return 0;
}

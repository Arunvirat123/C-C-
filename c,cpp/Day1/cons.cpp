#include <iostream>
using namespace std;

int main()
{
	const int x = 5;
	int &r = x;
	const it &cr = x;
	cout << x << " "<< cr << endl;
	cr = 10;
	x = 20;
	cout << x <<" "<< cr << endl;
	return 0;
}

#include<future>
#include<iostream>
#include<thread>
using namespace std;

int calculate(int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		this_thread::sleep_for(chrono::seconds(1));
		sum = sum+i;
	}
	return sum;
}
int main()
{
	future<int> f=async(calculate, 5);
	cout<<f.get() << endl;
}

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	int ele;
	cout <<"element the number of element: ";
	cin >> n;
	vector<int> v;
	
	v.reserve(n);
	cout<<"size: "<<v.size() <<"capacity: "<<v.capacity() << endl;
	cout<<"enter the elements: ";
	for(int i = 0;i<n; i++)
	{
	cin >> ele;
	v.push_back(ele);
	}
	cout<<"size : "<<v.size()<<"capacity : "<<v.capacity() << endl;
	for(const int&ele : v)
	   cout << ele <<" ";
	   
	   return 0;
}

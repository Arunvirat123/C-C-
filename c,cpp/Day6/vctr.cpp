#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = {12,23,34,45,56,7854};
	v.push_back(84);
	v.push_back(54);
	cout << v.size() <<endl;

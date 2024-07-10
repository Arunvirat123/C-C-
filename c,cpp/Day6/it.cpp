#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> v ={12,23,34,45,56};
	
	vector<int>::iterator it= begin(v);
	
	for (auto it = v.rbegin(); it !=v.rend(); ++it)
	{
		cout<<*it << endl;
		
	}
	return 0;
}

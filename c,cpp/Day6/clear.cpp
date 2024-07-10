#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &v)
{
	cout <<"size : "<< v.size() << endl;
	for(int &ele : v)
		cout << ele<< ' ';
	cout << endl;
}
int main()
{
	vector<int> v = {12,23,34,45,56};
	
	printvector(v);
	
	v.clear();
	
	printvector(v);
	
	return 0;
}	


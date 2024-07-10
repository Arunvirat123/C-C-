#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main()
{
	vector<int> v1 = {1,2,6,8,4,3,5,7,9};
	sort(v1.begin(),v1.end(),greater<int>());
	for(int num: v1)
	{
		cout <<num<< " ";
	}
	return 0;
}











































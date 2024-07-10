#include<iostream>
#include<algorithm>

using namespace std;

class compare
{
public:
	bool operator() (int x,int y)
	{
		return x>y;
	}
	
};
int main()
{
	int arr[] = {12,23,6,4,7,8};
	sort(begin(arr),end(arr),compare());
	for (int ele : arr)
		cout << ele << " ";
		
	return 0;
}

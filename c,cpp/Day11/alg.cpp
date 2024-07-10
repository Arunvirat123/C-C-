#include <iostream>
#include <vector>
#include <set>
#include <algorithm> 
using namespace std;

int main()
{
multiset<int> ms ;
for(int i = 0;i<20;i++)
{
	int ele = rand () % 50;
	cout<<ele <<" ";
	ms.insert(ele);
}
cout << endl;
for (it ele : ms)
	cout << ele << ' ';
return 0;
}

#include <iostream>
#include <string>
#include<map>
using namespace std;

int  main()
{
	map <int, int> freq;
	int ele;
	for(int i = 0; i<31; i++)
	{
		cin >> ele;
		freq[ele] += 1;
	}
	int captainsRoom = 0;
	for(auto ele : freq)
	{ cout << ele.first<< " "<< ele.second << endl;
	  if(ele.second == 1)
	  	captainsRoom = ele.first;
	}
	cout << "captains Room : "<< captainsRoom<< endl;
	return 0;
}

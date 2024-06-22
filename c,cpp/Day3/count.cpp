#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int arr[] = {12,21,23,32,34,43};
	int n = sizeof(arr) / sizeof(int);
	int key;
	cout <<"Enter the element to search : ";
	cin >> key;
	
	int *ptr =find(arr, arr+n, key);
	if (ptr == arr+n)
		cout << "element not found\n";
	else
	{
		int index = ptr - arr;
		cout <<"element found at index" << index << endl;
	}
	return 0;
}		
		
		

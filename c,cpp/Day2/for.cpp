#iclude <iostream>
using namespace std;
int main()
{
	int arr[] = {12,23,34,45};
	for(int ele : arr)
	{
		ele ele + 2;
		cout << ele << endl;
	}
	for(const int &ele : arr)
	{
	 cout << ele << endl;
	 }
	 return 0;
}

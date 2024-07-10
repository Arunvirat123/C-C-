#include<iostream>
#include<forward_list>
#include<list>
#include<fstream>

using namespace std;

int main()
{
	list<int> lst;
	forward_list<int> fwd;
	ifstream infile("data.txt");
	
	lst.push_back(12);
	lst.push_front(21);
	
	if(infile)
	{
	int ele;
	while(infile.eof())
	{
		infile>>ele;
		fwd.push_front(ele);
		cout<<"inserting"<< ele << endl;
	}
	cout << "element of forward list \n";
	for(int ele:fwd)
		cout<< ele << "--->";
	}
}

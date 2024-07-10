#include<iostream>
#include<string>
#include<fstream>
#include<list>
using namespace std;

int main()
{
	ifstream infile("names.txt");
	if(infile)
	{
		list<string> v;
		string s;
		for (int i =0; i < 5; i++)
		{
			infile >> s;
			v.push_back(s);
		}
		v.sort();

		ofstream outfile("sortednames.txt");
		for (string &s : v)
		{
			outfile << s << endl;
		}
		outfile.close();
		infile.close();
	}
	else
		cout<<"unable to open the file \n";
	return 0;
}

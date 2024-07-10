#include<iostream>
#include<vector>
using namespace std;

class Mystack
{
	vector<int> buffer;
public:
	void push(int ele)
	{
		buffer.push_back(ele);
	}
	int pop()
	{
		if(buffer.empty() == true)
			throw"stack empty";
		int ele = buffer.back();
		buffer.pop_back();
		return ele;
	}
	size_t size()
	{
		return buffer.size();
	}
};

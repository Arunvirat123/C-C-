#include<cstring>
#include<iostream>

using namespace std;
int main()
{
	string str;
	cout << "enter the string:";
	cin >> str;
	stack<char> stk;
	queue<char> que;
	for (char c : str)
		{
		stk.push(c);
		que.push(c);
		}
	while(stk.empty() == false){
		char x = stk.top() ; stk.pop();
		char y = que.front(); que.pop();
		
		if(x != y)
		   break;
}
if (stk.empty() == false)
	cout<<"not a pallindrome \n";
else
	cout<<"pallindrome \n";
return 0;
}
		

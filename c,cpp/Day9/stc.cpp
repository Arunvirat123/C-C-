#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
stack<string> stk;
11 cout << stk.empty() <<" << stk.size() << endl;
stk.push("Alpita");
stk.push("Anuj");
stk.push("Arfath");
stk.push("Arjun");
stk.push("Arun");
cout << stk.empty() <<" " << stk.size() << endl;
cout << stk.pop();
cout << stk.empty() <<" " << stk.size() << endl;
return 0;
}

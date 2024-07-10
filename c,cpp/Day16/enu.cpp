#include <stdio.h>
#include <iostream>
using namespace std;

enum class stackmenu {PUSH = 1,POP,TOP,DISPLAY,EXIT};
enum class queuemenu {PUSH,POP,FRONT,DISPLAYEXIT};

int main()
{
	int x;
	cin >> x;
	stackmenu stackoperation = static_cast<stackmenu>(x);
	switch(stackoperation)
	{
	case stackmenu::PUSH : cout << "insert element \n"; break;
	case stackmenu::POP : cout << "delete element \n"; break;
	}
	
	return 0;
}  

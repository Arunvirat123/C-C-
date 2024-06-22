#include <iostream>
#include <cstring>

class Mystring
{
		char *ptr;
	public:
		Mystring(const char *p_ptr = nullptr)
		{
		if(p_ptr == nullptr)
		  ptr = nullptr;
		else {
		  int len = strlen(p_ptr);
		  ptr = new char[len+1];
		  strcpy(ptr, p_ptr);
		}
		}
};

int main()
{
Mystring name = "Arun";
return 0;
}

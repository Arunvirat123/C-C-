#include <iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

class Mystring
{
		char *ptr;
	public:
		Mystring(const char *p_ptr);
		Mystring();
		char & operator[](int index);
		Mystring operator +(const Mystring &rhs) const;
		void display()
		{
			std :: cout << ptr << std::endl;
		}
};
Mystring Mystring:: operator +(const Mystring &rhs) const
{
	Mystring temp;
	int len = strlen(ptr) + strlen(rhs.ptr);
	temp.ptr = new char[len+1];
	strcpy(temp.ptr , ptr);
	strcpy(temp.ptr , rhs.ptr);
	return temp;
}
int main()
{
Mystring firstname = "ARUN";
Mystring lastname = "KUMAR";
Mystring fullname = firstname + lastname;

fullname.display();

return 0;

}

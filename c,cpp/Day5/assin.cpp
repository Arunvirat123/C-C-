#include <iostream>
#include<cstring>

class Mystring
{
	char *ptr;
	public:
		Mystring(const char *p_ptr = nullptr);
		Mystring(const Mystring &old);
		~Mystring();
		void display(){
		   std::cout <<(int *)ptr << " "
		             << ptr << std::end1;
		 }
		 Mystring &operator = (const Mystring &rhs)
		 {
		   cout << "assighnment\n";
		   int len = strlen(rhs.ptr);
		   ptr = new char [len + 1];
		   strcpy(ptr , rhs.ptr);
		   return *this;
		 }
};

int main()
{
 Mystring s1 = "ARUN";
 Mystring s2;
 
 s1 = s2;
 
 s1.display();
 s2.display();
 }

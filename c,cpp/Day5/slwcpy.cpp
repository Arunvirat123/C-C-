#include<iostream>
#include<cstring>

class Mystring 
{
	char *ptr;
	public:
		Mystring(const char *p_ptr = nullptr)
		{
		 std::cout<<"constructor\n";
		 if(p_ptr == nullptr)
		    ptr = nullptr;
		 else
		 {
		   int len = strlen(p_ptr);
		   ptr = new char[len + 1];
		   strcpy(ptr,p_ptr);
		   }
		}
		~Mystring()
		{
		  std::cout <<"destructor\n";
		  delete [] ptr;
		}
};

int main()
{
  Mystring s1 = "ARUN";
  Mystring s2 = s1;
  return 0;
}
		 

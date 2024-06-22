
#include<cstring>

int main()
{
	Mystring s1 = "ARUN";
	
	std::cout << "before assighnment"<< std ::endl;
	s1.display();
	
	s1 = s2;
	
	std::cout<< "after assighnment "<< std::endl;
	s1.display();
	
	return 0;
}

#include<iostream>
#include<cstring>

int main()
{
	auto_ptr<Mystring> s1 (new Mystring("SIKANDER"));
	auto_ptr<Mystring> s2 (s1);
	s1->display();
	s2->display();
}

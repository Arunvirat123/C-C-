#include<iostream>
#include<thread>

void display()
{
	for(int i = 0; i<5000;i++)
		std::cout<< "*";
}
int main()
{
	std::thread t {display};
	for(int i = 0; i<5000;i++)
		std::cout<<"-";
	t.join();
	return 0;
}

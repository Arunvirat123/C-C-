#include<iostream>
#include<thread>

void update(int x)
{
	std::cout << "argument received"<< x << std::endl;
	x = x*2;
	std::cout << "inside thread updated x ="<< x << std::endl;
	
}
int main()
{
	int a = 5;
	std::thread t1{update,std::ref(a)};
	
	t1.join();
	
	std::cout<< "main thread a = "<< a << std::endl;
	
	return 0;
}

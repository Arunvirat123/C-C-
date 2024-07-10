#include<cstdio>
#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
void display(char c)
{
	std::cout<< "thread started: "<<std::endl;
	std::unique_lock<std::mutex> u1_sum{m};
	std::cout<<"thread acquired ";
	for(int i =0;i<5;i++)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout<<c<<std::endl;
	}
	std::cout<<"lock released\n";
	u1_sum.unlock();
	std::this_thread::sleep_for(std::chrono::seconds(1));
	printf("end of function %c",c);
}
int main()
{
	std::thread t1{display,'x'};
	std::thread t2{display,'#'};
	
	t1.join();
	t2.join();
	
	return 0;
}
	

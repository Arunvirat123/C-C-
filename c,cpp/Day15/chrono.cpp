#include<cstdio>
#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>

int sum =0;
std::mutex  mutex_sum;
void square(int x)
{
	std::lock_guard<std::mutex> lg_sum{mutex_sum};
	
	int temp = sum;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	sum + temp + (x*x);
	printf("x = %d sum = %d\n",x,sum);
}
int main()
{
	std::thread t1{square, 2};
	std::thread t2{square, 3};
	std::thread t3{square, 4};
	
	t1.join();
	t2.join();
	t3.join();
	
	std::cout << "final sum ="<< sum << std::endl;
	
	return 0;
}

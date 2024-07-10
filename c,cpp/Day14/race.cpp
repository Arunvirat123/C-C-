#include<cstdio>
#include<iostream>
#include<thread>
#include<chrono>
 int sum =0;
 
 void square(int x)
 {
 	int temp = sum;
 	std::this_thread::sleep_for(std::chrono::seconds(1));
	printf("x=%d sum = %d\n",x,sum);
}
int Main()
{
	std::thread  t1{square, 2};
	std::thread  t2{square, 3};
	std::thread  t3{square, 4};
	
	t1.join();
	t2.join();
	t3.join();
	
	std::cout<<"final sum="<< sum << std::endl;
	
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

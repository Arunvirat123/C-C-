#include<iostream>
#include<thread>
#include<stdio.h>

void fun()
{
	std::cout<<"id in function"
		<<std::this_thread::get_id()<< std::endl;
}
int main()
{
	std::cout<<"id in function"
		<<std::this_thread::get_id()<< std::endl;
#if 0
	fun();
#else 
	std::thread t = std thread(fun);
	printf("id of t = %id\n",t.get_id());
	t.join();
#endif
	return 0;
}

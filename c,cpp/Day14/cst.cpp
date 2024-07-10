#include <thread>
#include <iostream>
#include <cstdio>

class ThreadMF

{

	char c;

public:

	ThreadMF (char_c) : c(_c)
	{}
	void display(int n) const
	{
	std::thread::id tid = std::this_thread::get_id(); 
	printf("%ld %p\n",tid, this); 
	for(int i = 0; i<n; i++)
		std::cout<<c;
	}
};
int main()
{
	ThreadMF obj1('*');
	ThreadMF obj2('-');
	std::cout <<"&obj1 = " << &obj1 << std::endl; 
	std::cout <<"&obj2 = " << &obj2 << std::endl;
	std::thread t1 (&ThreadMF::display, &obj1,500); 
	std::thread t2 (&ThreadMF::display, &obj2,500);
	t1.join();
	t2.join();
}

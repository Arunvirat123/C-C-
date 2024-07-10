#include <cstdio>
#include <iostream>

int sum= 0;

void square(int x) 
{
    int temp = sum;
    sum = temp + (x * x);
	printf("x = %d sum = %d\n",x,sum);
}

int main() 
{
	square(2);
	square(3);
	square(4);
	square(5);
	std::cout << "final sum = " << sum << std::endl;
    return 0;
}


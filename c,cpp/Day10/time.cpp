#include<queue>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	priority_queue<int> pq;
	time_t t;
	srand((unsigned) time(&t));

	for (int i = 0;i<10;i++)
		cout<< (rand() % 100) <<endl;
	return 0;
}

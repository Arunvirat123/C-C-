#include<iostream>
#include<vector>
using namespace std;
int main()
{
	try{
		for(;;){
			int *ptr = new int[100000000000L];
			cout<<"allocation successfull \n";
			}
		}
		catch(bad_alloc &e)
		{
			cout<<"exception: "<< e.what();
		}
		return 0;
	}

#include <iostream>
#include <thread>
#include <vector>
 
using namespace std;
int global = 5;
int *ptr;
void func( )
{
    global <<= 1;
    *ptr >>= 1;
    cout << "Global variable : " << global << endl;
    cout << "Heap Segment : " << *ptr << endl;
}
int main()
{
    ptr = new int(23);
    thread t1{func};
 
    t1.join();
    cout <<"Main Thread \n";
    cout << "Global variable : " << global << endl;
    cout << "Heap Segment : " << *ptr << endl;
    return 0;
}

#include <iostream>
#include <thread>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
 
int global = 5;
 
 
int main() {
    int *ptr = new int(8);
    int local = 12;
    if(fork() == 0)
    {
        cout << "Child Process \n";
        cout << "Global variable : " << global << endl;
        cout << "Heap Segment : " << *ptr << endl;
        cout << "Stack Segment : " << local << endl;
        exit(0);
    }
    wait(NULL);
    return 0;
}

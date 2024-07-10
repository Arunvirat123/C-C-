#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
void display(set<int> s)
{
    for(int ele : s)
        cout << ele <<" ";
    cout << endl;
}
int main()
{
    vector<int>     v = {12,21,5,3,7,5,9,21,56,3};
    set<int>    s;
    int key;
    for(int &ele : v)
    {
        s.insert(ele);
        display(s);
    }
    
    cout<<"enter the element to delete :";
    cin >> key;
    int c = s.erase(key);
    if(c == 0)
    	cout << "element not found\n";
    else
    	cout<<"element deleted \n";
    display(s);
    return 0;
}

#include <iostream>
#include <list>
using namespace std;

int main()
{
   list<int> lst;
   lst.push_back(45);       // 45 
   lst.push_front(23);      // 23 45 
   lst.push_back(89);       // 23 45 89
   
   cout <<"Number of elements in List : " << lst.size() << endl;
    for(int &ele : lst)
        cout <<ele <<" ";
    cout << endl;
    list<int>::iterator     it = lst.begin();
    // it = it + 1;
    it++;
    lst.insert(it , 30);    // 23 30 45 89 
    
    for(it = lst.begin(); it != lst.end() ; ++it)
    {
        cout << *it <<" ";
    }
    cout << endl;
    cout <<"Front : " << lst.front() << endl;   // 23
    cout <<"Back : " << lst.back() << endl;   // 89
    lst.pop_front();
    cout <<"Front : " << lst.front() << endl;   // 30
    cout <<"Back : " << lst.back() << endl;   // 89
    lst.pop_back();
    cout <<"Front : " << lst.front() << endl;   // 30
    cout <<"Back : " << lst.back() << endl;   // 45
    lst.erase(lst.begin() );
     cout <<"Front : " << lst.front() << endl;   // 45
    cout <<"Back : " << lst.back() << endl;   // 45
    return 0;
}


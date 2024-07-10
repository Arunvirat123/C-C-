#include <iostream>
#include <string>
#include<set>
using namespace std;
void DuplicateStr(string &str){
    set<char> s;
    for(auto ch : str){
       s.insert(ch);
    }
    cout<<endl;
    cout<<"Number of Unique Characters: "<<endl;
    for(auto ch : s){
        cout<<ch << " ";
    }
    cout<<endl;
}
 
int main()
{
    string str = "TODAY IS MONDAY";
    DuplicateStr(str);
    return 0;
}

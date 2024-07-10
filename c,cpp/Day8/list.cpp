#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    list<string>  lst = {"Sikander", "Priya", "Nabeel", "Arjun", "Nandini"};
    string newStudent;
    string key;
    cout << "Enter the name of Student to add : ";
    cin >> newStudent;

    cout << "Name the student before whom " << newStudent <<" should sit :";
    cin >> key;
    auto it = find(lst.begin(), lst.end() , key);

    lst.insert(it, newStudent);

    for(auto &ele : lst)
        cout << ele <<" ";
    cout << endl;
    

    return 0;
}

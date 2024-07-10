#include <queue>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
using namespace std;
// vector       list            deque 
// push_back    push_back       push_back
// pop_back     pop_back        pop_back
//  -           push_front      push_front
//  -           pop_front       pop_front
//  [], at      -               [], at     
class Integer
{
    int num;
public : 
    static int count;
    Integer(int p_num = 0) : num(p_num)
    {
        cout << "Constructor " << num << endl;
        count++;
    }
    Integer(const Integer &old) : num(old.num)
    {
        cout << "Copy Constructor " << num << endl;
        count++;
    }
    Integer(Integer &&old) : num(old.num)
    {
        cout << "Move Constructor " << num << endl;
    }
    ~Integer()
    {
        cout << "Destructor \n";
    }
    Integer & operator =(const Integer &rhs)
    {
        cout <<"Operator = \n";
        num = rhs.num;
        return *this;
    }
    bool operator ==(const Integer &rhs) const 
    {
        return num == rhs.num;
    }
    // Integer & operator =(Integer &&rhs)
    // {
    //     cout <<"Move = \n";
    //     num = rhs.num;
    //     return *this;
    // }
    friend istream& operator >>(istream& in, Integer& obj);
    friend ostream& operator <<(ostream& out, const Integer& obj);
};
int Integer::count = 0;

istream& operator >>(istream& in, Integer& obj)
{
    cin >> obj.num;
    return in;
}
ostream& operator <<(ostream& out, const Integer& obj)
{
    cout << obj.num;
    return out;
}
int main()
{
    vector<Integer>  v = {12,23,23,34,34,34,45,56};
    auto it = v.begin();
    while(it != v.end() - 1)
    {
        if(*it == *(it + 1))
        {
            cout << *it <<" is duplicated and begin deleted \n";
            v.erase(it);
            continue;
        }
        it++;
    }
    cout << "Final List of elements \n";
    for(auto &ele : v)
        cout << ele <<" ";
    return 0;
}






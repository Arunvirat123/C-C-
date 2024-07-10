#include <queue>
#include <iostream>
#include <cstdlib>
#include <vector>
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
    Integer & operator =(Integer &&rhs)
    {
        cout <<"Move = \n";
        num = rhs.num;
        return *this;
    }
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
    vector<Integer>  v;
    for(int i = 0 ; i < 5 ; i++)
    {
        v.emplace_back(5);
        cout <<"-----------------------\n";
    }
    cout << "Total times constructors are called : " << Integer::count << endl;
    auto it = v.begin();
    v.insert(it, 12);
    cout << "Total times constructors are called : " << Integer::count << endl;
    return 0;
}






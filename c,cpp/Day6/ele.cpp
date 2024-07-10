#include <iostream>
#include <vector>
using namespace std;
class Integer
{
    int num;
public : 
    Integer(int p_num = 0) : num(p_num)
    {
        cout << "Constructor " << num << endl;
    }
    Integer(const Integer &old) : num(old.num)
    {
        cout << "Copy Constructor " << num << endl;
    }
    ~Integer()
    {
        cout << "Destructor \n";
    }
    friend istream& operator >>(istream& in, Integer& obj);
    friend ostream& operator <<(ostream& out, const Integer& obj);
};
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

int n;
cout << "Enter the number of elements : ";
cin >> n;
vector<Integer>  v(n, 1);
// v.reserve(n);
// cout << "Enter the elements : ";
// for (int i = 0; i < n; i++)
// {
// //cin >> v[i];
// int ele;
// cin >> ele;
// v.push_back(ele);
// }
// cout << "The elements of vector are \n";
// for (Integer ele : v)
// cout << ele <<" ";
return 0;
}



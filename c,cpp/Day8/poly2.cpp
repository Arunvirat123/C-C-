#include<iostream>
#include<list>
#include<algorithm>
#include<string>

using namespace std;

class Base
{
public :
virtual void display()
{
cout<<"BASE FUNCTION \n";
}
};
class Derived : public Base
{public:
void display()
{
cout<<"DERIVED FUNCTION \n";
}
};

int main()
{
Base *ptrBase, bObj;
Derived dObj;

bObj.display();
dObj.display();

ptrBase = &bObj;
ptrBase->display();

ptrBase = &dObj;
ptrBase->display();
return 0;
}
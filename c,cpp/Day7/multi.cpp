#include<iostream>
using namespace std;
class A
{
  int a[4];
  public : A(){}
};
class B1 : public A
{
  int b1;
};
class B2 : public A
{
  int b2;
};
class c : public B1,public B2
{
};
int main()
{
  c obj;
  return 0;
}

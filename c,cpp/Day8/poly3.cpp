#include<iostream>
#include<list>
#include<algorithm>
#include<string>

using namespace std;

class Base
{
   protected: int bdata;

   public:

   Base (int x)
    {
        bdata = x;
    } 

   void display()
   {  
   cout<<"\n BASE DISPLAY "<<endl;

   cout<<"bdata = "<<bdata<<endl;
   }
} ;
class Derived : public Base
{
  private: int ddata;
  public:

  Derived (int x,int y): Base (x)
  {
    ddata = y;
  } 
  void display()
  {
    cout<<"\n DERIVED DISPLAY "<<endl;

    cout<<"bdata = "<<bdata<<endl;

    cout<<"ddata = "<<ddata<<endl;
  } 

};
void func(Base &ob){
    ob.display();
}

int main()

{

  Base bobj (5);

  Derived dobj (2,4);  

  func(bobj);
  func(dobj);
}
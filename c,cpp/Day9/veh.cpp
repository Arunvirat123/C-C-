#include <cstdio>
#include <typeinfo>
#include <iostream>
using namespace std;
class Vehicle
{
};
class Car : public Vehicle
{
};
class Bus :public Vehicle
{
};
class Bike :public Vehicle
{
};

int main()

{
int ch;
Vehicle *bp;
for(;;)
{
cout<<"\n 1. Car 2 . Bus 3. Bike 4. Exit \n";
cin>>ch;
switch(ch)
{
case 1 : bp = new Car; break;
case 2 : bp = new Bus; break;
case 3 : bp = new Bike; break;
default : return 0;
}
if (typeid(*bp) == typeid(car))
	cout<<"bp pointing to car bject \n";
if(typeid(*bp) != typeid(car))
	cout<<"bp not pointing to car object \n";
}
retur 0;
}


#include <typeinfo>
#include <iostream>
using namespace std;
class Vehicle
{
    public : 
        // virtual ~Vehicle() 
        // {}
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
    Vehicle     *ptr_v;
    Vehicle     v_obj;
    Car         c_obj;
    Car         *ptr_c;
    Bus         b_obj;

    ptr_v = &v_obj; 
    ptr_v = &c_obj;

    // ptr_c = &v_obj;     //invalid.
    ptr_c = static_cast<Car *>(&v_obj);

    ptr_v = &b_obj;
    // ptr_c = ptr_v;      //invalid

    cout << ptr_v << endl;
    if(typeid(*ptr_v) == typeid(Car))
        ptr_c = static_cast<Car *>(ptr_v);
    cout << ptr_c << endl;
    return 0;
}


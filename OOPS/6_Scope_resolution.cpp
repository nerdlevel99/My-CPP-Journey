#include <iostream>
using namespace std;
class car
{
    public:
    int speed = 69; // will cause a diamond problem as the same name variable is present in base class also
    int wheels;
    string color;
    int Engine;
};

class truck
{
    public:
    int speed = 699  ;
};

class Mahindra : public car, public truck // single level derived class
{

};

int main()
{
    Mahindra Abhi;
    // we can't simply do it like Abhi.speed as the compiler don't know which speed we are referencing too
    // and in this type of cases what we can do is : 
    cout << Abhi.truck::speed<<endl;
    cout<<Abhi.car::speed<<endl;

    return 0;
}

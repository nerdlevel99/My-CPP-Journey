#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Base class constructor called" << endl;
    }

   virtual ~base()
    {
        cout << "Base class destructor called " << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Derived class constructor called " << endl;
    }

    ~derived()
    {
        cout << "Derived class Destructor called " << endl;
    }
};

int main()
{
    // upcasting
    base *abhi = new derived;
    delete abhi;

    // without using virtual destructor the output will be : 
    /* Base class constructor called
        Derived class constructor called
        Base class destructor called    */


        // if we don't use virtual base class destructor here , the destructor of derived class will not get called at all.
        
    return 0;
}
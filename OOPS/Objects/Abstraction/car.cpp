#include <iostream>
// #include "car.h"
using namespace std;


class car
{
private:
    // int mileage = 100;

public:
    virtual void engine() = 0;

    virtual void mileage() = 0;
};

class thar : public car
{
public:
    void engine()
    {
        cout << "Thar's engine is stronger " << endl;
    }

    void mileage()
    {
        cout << "Thar's mileage isn't that good " << endl;
    }
};

class Toyota : public car
{
public:
    void engine()
    {
        cout << "Toyota have a pretty good engine " << endl;
    }

    void mileage()
    {
        cout << "I don't really know much about Toyota's Mileage " << endl;
    }
};



int main()
{
    car* abhi = new Toyota;
    abhi->engine();


    return 0;
}
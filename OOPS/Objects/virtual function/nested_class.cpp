#include <iostream>
using namespace std;

class engine
{
    public:

    void start()
    {
        cout<<"engine started : " <<endl;
    }


};

class car
{
    
    public:
    engine*eng;
    car()
    {
         eng = new engine;
    }

    void start_car()
    {
        eng->start();
    }

};
int main()
{
    car* maruti  =new car;
    maruti->start_car();
    return 0;
}
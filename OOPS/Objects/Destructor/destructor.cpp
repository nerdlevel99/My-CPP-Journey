#include <iostream>
using namespace std;

class car
{
    public:
    int key;
    int weight;

    car()
    {
        cout<<" Base class : Constructor Called " <<endl;
    }

    virtual~car()
    {
        cout<<"destructor called : base class"<<endl;
    }

};


class nano : public virtual car 
{
    public:
    nano()
    {
        cout<<"Nano class : constructor called" <<endl;
    }

     ~nano()
    {
        cout<<"Nano class : destructor called " <<endl;
    }
};


class cybertruck : virtual public car ,public  nano
{   
    public:
    cybertruck()
    {
        cout<<"Cyber Truck called : Constructor "<<endl;

    }

    ~cybertruck()
    {
        cout<<"destructor called : truck class "<<endl;
    }
};



int main()
{
    // cout<<"\n---------------------Object creation 1 : -------------------------------\n"<<endl;
    // car tesla;
    cout<<"\n---------------------Object creation 2 : -------------------------------\n"<<endl;
    nano tata1;



    // cout<<"\n---------------------Object creation 3 : -------------------------------\n"<<endl;
    // cybertruck abhi;
    // cout<<"\n---------------------Program finished : -------------------------------\n"<<endl;
    
    return 0;
}
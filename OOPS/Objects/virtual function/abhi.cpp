#include <iostream>
using namespace std;

class car
{

    public:
     void display()
    {
        cout<<"Hey i am inside car class "<<endl;
    }
};

class tesla: public car
{   
    public:
   virtual void display()
    {
        cout<<"Hey i am inside tesla class" <<endl;
    }
};

int main()
{
    car* maruti = new car;
    maruti->display();
    // return 0;


    // hamesha base class ka function class hoga : 
    cout<<"For suzuki : "<<endl;
    car*suzuki = new tesla;
    suzuki->display();

    cout<<"For Mahindra : "<<endl;
    // tesla *mahindra = *(tesla) new car;
    tesla *mahindra = (tesla*) new car;  




    mahindra->display();

}
#include <iostream>
using namespace std;

class four_wheeler
{
    public:
    string name;
    int Plate_no;
    int weight;
    
      virtual void print_name()
    {
        cout<<"Hello i am inside four_wheeler class";
    }


};

class car:public four_wheeler
{
    public:
    int seating_capacity;
    int speed;
    // without virtual  keyword type member function of *type(type of object is called) will be called 
    /*virtual*/ void print_name()
    {
        cout<<"hello i am inside car class";
    }
};


int main()
{

    /* Normal zindagi : 
    car* maruti = new car;
    maruti->print_name();
    */

   /*Parent class ka Pointer aur child class ka object */

    // Hamesha Parent class ka function call hoga :) XOXO

    /* Upcasting : */


//      four_wheeler *maruti   = new car;
//    maruti->print_name(); 


   /*Child class ka pointer aur parent class ki object*/
   /* -----*/





    car *maruti = (car*) new four_wheeler;
    maruti->print_name();


    return 0;
}
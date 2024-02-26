#include <iostream>
using namespace std;

class four_wheeler
{
    public:
    string name;
    
    four_wheeler()
    {
        cout<<"I am inside Wheeler";
    }


};

class car:public four_wheeler
{
    public:
    cout<<"I am inside ";
    
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
#include <iostream>
using namespace std;


class car // defined a class with name car
{

     private: // private means we can't access it outside the function
    int Key_no; 


    // state;
    public: // set access modifier to public so that it, cant be accessed outside the class too
    int mileage;
    int Max_speed;
    int Condition_score;

    // member functions
    void increase_speed(int n) // manipulating the behaviour / properties 
    {
        Max_speed += n;
        cout<<"\nSuccessfully Increased the speed of car by : " << n << endl ;

    }

   
    // to access private Members outside the class we can use Getters and Setters ! 

    int getKey()
    {
        return Key_no;
    }

    void setKey(int Key_no)
    {
       this -> Key_no = Key_no;
    }
};

int main()
{
    car Suzuki; // made an object under class suzuki

    Suzuki.mileage = 100; 
    Suzuki.Max_speed = 110;
    cout<<"Mileage = " << Suzuki.mileage << "\nMax-Speed : " << Suzuki.Max_speed;
    Suzuki.increase_speed(10);
    cout<< "New Speed : " << Suzuki.Max_speed <<endl <<endl<<endl;
    // ----------------------------------------------------------------------------------
    // Accessing private state / members : 

    Suzuki.setKey(696969);
    cout<<"Key for suzuki is : " <<  Suzuki.getKey() <<endl;




    return 0;
}
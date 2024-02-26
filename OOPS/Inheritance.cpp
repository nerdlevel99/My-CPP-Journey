#include <iostream>
using namespace std;


class vehicle // base class
{

     private:
    int Key_no; 

    public: 
    int mileage;
    int Max_speed = 50;
    int Condition_score;

    // member functions
    void increase_speed(int n) 
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

class truck:public vehicle
{
    public:
    int load_capacity;
};

class EV:public vehicle
{
    public:
    int battery_capacity;


};

class Ev_truck:public truck
{
    public: 
    int battery_capacity;
};

class Supercar:public vehicle , truck , Ev_truck
{
    public:
    int Nitro;
    int Max_speed = 100;
    
};


int main()
{
   
   truck *mahindra = new truck; // inherited class object 

   mahindra->Max_speed = 500;
   mahindra->load_capacity = 5000;

//    cout<<mahindra->Max_speed<<" " <<mahindra->load_capacity;

   EV* tesla = new EV;
   tesla->battery_capacity = 10004;
   tesla ->Condition_score = 100;
   tesla->Max_speed = 200;


   cout<<"Battery : "<< tesla->battery_capacity <<" Max Speed : " << tesla ->Max_speed ;

    tesla->increase_speed(10);
    mahindra->increase_speed(10);

    cout<<endl << "Mahindra - New speed : " <<mahindra->Max_speed;
    cout<<endl << "Tesla - New speed : " <<tesla->Max_speed;


    Ev_truck* Tesla_truck = new Ev_truck; // Multiple inheritance 

    Tesla_truck->load_capacity = 100;
    Tesla_truck ->battery_capacity = 200;
    Tesla_truck ->Max_speed = 199;
    Tesla_truck ->Condition_score = 500;

    cout<<"Condition score of your tesla - truck : " <<Tesla_truck ->Condition_score <<endl;
    cout<<"Condition score of your tesla - truck : " <<Tesla_truck ->battery_capacity <<endl;
    cout<<"Condition score of your tesla - truck : " <<Tesla_truck ->Max_speed <<endl;
    cout<<"Condition score of your tesla - truck : " <<Tesla_truck ->Condition_score <<endl;



    Supercar *Benz = new Supercar;
    Benz->Nitro = 399;
    cout<<Benz -> Nitro <<endl <<endl;

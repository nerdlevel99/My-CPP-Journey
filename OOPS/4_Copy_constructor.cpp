#include <iostream>
#include <conio.h>

using namespace std;

class car
{

private:
    int Key_no;

public:
    int mileage;
    int Max_speed;
    int Condition_score;

    car(){} // default constructor

    car(car &obj) // copy constructor 
    {
        // it will happen automatically without calling any function
        this->Max_speed = obj.Max_speed;
        this->Condition_score = obj.Condition_score;
        this->mileage = obj.mileage;
        cout << "Succesfully created a Copy " << endl;
        // basically constructor will call this automatically at the time of initialisation
    }



    // member functions
    void increase_speed(int n)
    {
        Max_speed += n;
        cout << "\nSuccessfully Increased the speed of car by : " << n << endl;
    }

    int getKey()
    {
        return Key_no;
    }

    void setKey(int Key_no)
    {
        this->Key_no = Key_no;
    }
};

int main()
{

    car suzuki;
    suzuki.Max_speed = 590;
    suzuki.Condition_score =1000;

    car buggati(suzuki);

    cout<<buggati.Max_speed <<" : " << buggati.Condition_score <<endl;

    car vreeza = buggati;

    cout<<"\nFor Vreeza : " << vreeza.Max_speed <<" : " <<vreeza.Condition_score;


    return 0;
}
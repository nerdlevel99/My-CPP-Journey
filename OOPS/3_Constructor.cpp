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

    car() // constructor with same name as of class :
    {
        // it will happen automatically without calling any function
        this->Max_speed = 0;
        this->Condition_score = 0;
        this->mileage = 0;
        cout << "Succesfully created Object and initialised their values to 0" << endl;
        // basically constructor will call this automatically at the time of initialisation
    }

    car(int speed, int score)
    {
        this->Max_speed = speed;
        this->Condition_score = score;
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

    car *Suzuki = new car;
    cout << "We can see that all the values are set to zero while creating object : " << endl;
    cout << "Speed :  " << Suzuki->Max_speed << " | Mileage : " << Suzuki->mileage << " | Condition Score : " << Suzuki->Condition_score << endl;

    car *buggati = new car(260, 1000); // calling parameterised constructor will automatically set the speed 260 and condition score 1000

    cout << "Speed of Bugatti : " << buggati->Max_speed << "  | Condition Score of Buggati : " << buggati->Condition_score << endl;

    return 0;
}
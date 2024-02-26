#include <iostream>
using namespace std;

class car{
    public:
    int key_no;
    int weight;
    int fuel_capacity;
    string name;

    car()
    {
        this ->fuel_capacity = 0;
        this->key_no = 0;
        this->name = "Lamborghini";
        this->weight = 2000;
    }


    void operator<<(car &obj)
{
    cout<<this->name<<endl;
}

};



int main()
{
    car *thar = new car;
    thar->fuel_capacity = 200;
    thar ->key_no = 150;
    thar ->name  = "Thar hai bhai";
    thar->weight = 499;

    cout<<thar;
    return 0;
}
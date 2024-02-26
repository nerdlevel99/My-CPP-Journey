#include <iostream>
using namespace std;

class car
{
public:
    int weight;
    string name;
    int key;

    car()
    {
    }

    car(car &obj)
    {
        cout << "Hey i am userdefined copy constructor : " <<endl;
        this->key = obj.key;
        this->name = obj.name;
        this->weight = obj.weight;
    }

    car(string name, int weight, int key)
    {
        this->name = name;
        this->weight = weight;
        this->key = key;
    }

    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Weight : " << this->weight << endl;
        cout << "key : " << this->key << endl;
        cout << "\n-----------------------------------------------\n";
    }
};

int main()
{

    car maruti("CyberTesla", 500, 6969);
    maruti.print();

    cout << "Userdefined  Copy constructor : " << endl;

    car tesla(maruti);
    tesla.print();

    return 0;
}
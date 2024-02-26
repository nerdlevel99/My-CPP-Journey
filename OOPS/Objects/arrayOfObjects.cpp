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
        this->name = "Abhi";
        this->weight = 400;
        this->key = 69;
    }

    car(string name , int weight , int key)
    {
        this->name = name;
        this->weight = weight;
        this->key = key;
    }

    void print()
    {
        cout<<"Name : " <<this->name<<endl;
        cout<<"Weight : " << this->weight <<endl;
        cout<<"key : " << this->key<<endl;
        cout<<"\n-----------------------------------------------\n";
    }
};



int main()
{


    car tesla[10];

    car maruti("maruti" , 500 , 6969);
    maruti.print();

    tesla[1].print();


    return 0;
}
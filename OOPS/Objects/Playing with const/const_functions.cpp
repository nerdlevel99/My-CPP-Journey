#include <iostream>
using namespace std;


class abc
{
    int x;
    int y;

    public:

    abc() :x(0) , y(0) {};

    abc(int val_x , int val_y) : x(val_x) , y(val_y){};

    int set_x(int x)  
    {
        this->x = x;
    }

    int set_y(int y)
    {
        this->y = y;
    }

 
    int get_x() const 
    {
        return x;
    }

    int get_y() const  // const // can't modify value while set const 
    {
        
        return y;
    }

};


void print(const abc &abhi)
{
    cout<<"X = " << abhi.get_x() << " , Y = " <<abhi.get_y()<<endl;
}

int main()
{
    abc abhi(5 , 8);
    cout<<"x : " << abhi.get_x() << "\ty:" << abhi.get_y() <<endl;

    // abhi.set_x(59);

    // cout<<abhi.get_x();

    print(abhi);


    return 0;
}
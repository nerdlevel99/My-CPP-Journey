#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;

    abc(int val_x, int val_y) : x(val_x), y(new int(val_y)){};

    // abc(&obj)


    abc(abc &obj)
    {
        this->x = obj.x;
        // this->y = obj.y;  : this is what happens in a default constructor :) 
        this->y = new int(*obj.y);
    }
};

void print(abc &obj)
{
    cout << "X : " << obj.x << " , Y : " << *obj.y << endl;
    printf("Pointer : %p\n----------------------------The end ------------------------\n" , obj.y);
}

int main()
{

    abc a(4, 5);
    print(a);

    abc b = a;
    print(b);

    return 0;
}
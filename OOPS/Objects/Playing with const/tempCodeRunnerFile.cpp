#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;

    abc(int val_x, int val_y) : x(val_x), y(new int(val_y)){};

    // abc(&obj)
};

void print(abc &obj)
{
    cout << "X : " << obj.x << " , Y : " << *obj.y << endl;
}

int main()
{

    abc a(4, 5);
    print(a);

    return 0;
}
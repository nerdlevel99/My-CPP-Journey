#include <iostream>
using namespace std;

class abc
{
    public:
    int x , y , z;

    abc(int a , int b , int c) : x(a) , y(b) , z(c){};
};

void print(abc &a)
{
    cout<<"x : " <<a.x << " , y = " << a.y << " , z = " << a.z <<endl;
}

int main()
{
    abc a(5 , 6, 7);
    print(a);
    return 0;
}
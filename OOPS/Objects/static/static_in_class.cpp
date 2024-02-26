#include <iostream>
using namespace std;

class abc
{
    public:
    static int x, y;

    void print()
    {
        cout<<x <<" " << y;
    }

};

int abc::x;
int abc ::y;


int main()
{
    abc a1;
    abc a2;
    a1.x = 10;
    cout<<"-----------------Printing A1-----------------"<<endl;
    a1.print();
    a1.y = 58;
    cout<<"\n--------------Printing A2--------------------" <<endl;
    a2.print();
    cout<<"\n\n-----------Program finished--------------------" <<endl;

    printf("As we can see all instances of the class are sharing same static data members x and y.\n Any changes made in one instance of class are reflected by other instances as well");


    return 0;
}
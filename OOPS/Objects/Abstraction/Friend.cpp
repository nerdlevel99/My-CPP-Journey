#include <iostream>
using namespace std;

class A
{
    private:
    int x = 69;

    friend class B;
};

class B : public A
{
    public:
    void print()
    {
        cout<<x;
    }
    
};

int main()
{
    
    B abhi ;
    abhi.print();
    return 0;
}
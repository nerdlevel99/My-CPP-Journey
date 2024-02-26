#include <iostream>
using namespace std;

void number(int n)
{
    if (n > 0)
    {
         number(n - 1);

    cout<<n <<" ";

    }
    
       
}

int main()
{
    number(5);
    return 0;
}
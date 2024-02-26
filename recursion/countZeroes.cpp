#include <iostream>
using namespace std;

int count(int num , int c)
{
    if(num == 0) return c;

    if(num%10 ==0) c++;

    count(num/10 , c);
}
int main()
{
    int num = 100290000;
    int c = 0;
    cout<<count(num , c);
    return 0;
}
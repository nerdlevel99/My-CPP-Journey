#include <iostream>
#include<algorithm>
using namespace std;

void static_func()
{
     static int x = 5; // using static keyword 
    cout<<x<<endl;
    x++;
}

void func()
{
    int x= 5;
    cout<<x<<endl;
    x++;
}


int main()
{

    cout<<"----------Using static keyword : the same Program is : " <<endl;
   for(int i=0; i< 5; i++)
   {
    cout<<"Function call " <<i+1<<endl;
    static_func();
   }

    cout<<"----------Without Using static keyword : Program is : " <<endl;
   for(int i=0; i< 5; i++)
   {
    cout<<"Function call " <<i+1<<endl;
    func();
   }


    
    return 0;
}
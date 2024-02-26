#include <iostream>
using namespace std;
int main()
{
    const int x = 5;

    const int *y = new int(5); // CONST DATA , non-const pointer : 
    cout<<*y <<endl;

    int b= 56;
    y = &b;

    cout<<*y;
    cout<<endl;


    int *const abhi = new int(69); // NON-CONST DATA , Const POINTER !! 
    cout<<"NON-CONST : DATA : & CONST POINTER -->\n";
    cout<<"Before : " <<*abhi <<endl ;

    *abhi = 47;
    cout<<"After : " << *abhi <<endl;

    // *abhi = &b; // throws error at you :) hehe




    

    return 0;
}
#include <iostream>
using namespace std;



void toh(int n , char A , char B , char C)
{
    if(n==0) return;

    toh(n-1 , A , C , B);
    // cout<<A << " --->  "<<C<<endl;
    cout<<"move disk "<<n <<"from  rod "<<A << " to rod" << C <<endl;
    toh(n-1 , B , A , C);
}
int main()
{
    int n;
    cout<<"Enter the number of disks : ";
    cin>> n;

    toh(n ,'A' , 'B' , 'C' );
    return 0;
}
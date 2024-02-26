#include <iostream>
int main()
{
    using namespace std;
    int n , i , j;
    cout<<"Enter the value of N : ";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
    
       for ( j = 1; j <= i; j++)
       {
        cout<<j;
       }
       cout<<endl;
    }
    
    return 0;
}
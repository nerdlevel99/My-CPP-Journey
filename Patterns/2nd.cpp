#include <iostream>
int main()
{
    using namespace std;
    int n , i , j;
    cout<<"Enter the value of N : ";
    cin>>n;

    for ( i = n; i >0; i--)
    {
       for ( j = i; j >0; j--)
       {
        cout<<j;
       }
       cout<<endl;
    }
    
    return 0;
}
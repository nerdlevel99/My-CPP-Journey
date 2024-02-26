#include <iostream>
int main()
{
    using namespace std;

    int i , j , k , n;
    cout<<"Enter the number : ";
    cin>>n;
    //space
    for ( i = 0; i < n; i++)
    {
    //space
        for ( j = i+1; j <= n ; j++)
        {
            cout<<"  ";
        }

        for ( j = 1; j <= i+1; j++)
        {
            cout<<j<<" ";
        }


        
        for ( j=i; j>0; j--)
        {
            cout<<j<<" ";
        }
        
        
        cout<<endl;
    }


    
    
    return 0;
}
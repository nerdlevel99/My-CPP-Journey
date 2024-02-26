#include <iostream>
int main()
{
    using namespace std;
    int i , j , k , n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for ( i = 0; i < n+n-1; i++)
    {
       if(i<n)
        for ( j = 0; j <= i; j++)
            cout<<"*";

        else if (i>=n)
        {
            for ( j = n+n-1; j >i; j--)
            {
                cout<<"*";
            }
            
        }
        
        cout<<endl;

    
    }
    return 0;

}
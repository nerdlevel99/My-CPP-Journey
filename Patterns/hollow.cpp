#include <iostream>
int main()
{
    using namespace std;
    int i , j , k ,n;
    cout<<"Enter the value of N : ";
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        k=1;
    for ( j = 0; j < i*2+1; j++)
    {
        if (i==0||i==n-1)
        {
            if (j%2==0)
            {
                cout<<k;
                k++;
            }

            else
            cout<<" ";
        }
        else{
            if (j==0)
            cout<<"1";
        
        else if (j==i*2)
            {
                cout<<i+1;
            }
            else
            cout<<" ";

            
            
            
        }
        
    }

    cout<<endl;
    }
    
    
    return 0;
}
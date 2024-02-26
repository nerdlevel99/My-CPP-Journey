#include <iostream>
int main()
{
    using namespace std;
    int i , j , k , n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j <= n; j++)
        {
           if (i==0)
            cout<<j;
           
           else
            if (j==i+1||j==n)
                cout<<j;
            else
            cout<<" ";
        }
           
        cout<<endl;
    }
    
    
    return 0;
}

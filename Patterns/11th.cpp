#include <iostream>
int main()
{
    using namespace std;
    int i , j , k , n;
    cout<<"Enter the number : ";
    cin>>n;

    k=1;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            cout<<k;
            k++;

            if (j<i)
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
   
   int c = k-n;


    for (i= 0; i < n ; i++)
    { 
         k = c;
        for ( j = 0; j <n-i; j++)
        {
            cout<<k;
            k++;
            if (j<n-i-1)
        {
            cout<<"*";
        }
        
        }
        cout<<endl;
        c = c - (n-i-1);
        
    }
    
    return 0;
}
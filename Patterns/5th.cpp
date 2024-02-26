#include <iostream>
int main()
{
    using namespace std;
    int i , j ,k , n;
    cout<<"Enter the number : ";
    cin>> n;

    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            k=1;

            
            
           if (i==0||i==n)
           {
            cout<<j+1;
           }

            else{
                if (j==0||j==i-1)
                {
                    cout<<j+1;
                }
                else
                cout<<" ";
            }

           

            
        
        }
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    int i , j ,k , n;
    cout<<"Enter the value of N : ";
    cin>> n;

   for ( i = 1; i <= n; i++)
   {    int num = i;
        int start = 9-i;

        for ( j = 0; j < 17; j++)
        {
            if(j==start && num>0)
            {
            cout<<i;
            start+=2;
            num--;
            }
            else
            cout <<"*";
            
        }
        cout<<endl;
   }
   
    
    return 0;
}
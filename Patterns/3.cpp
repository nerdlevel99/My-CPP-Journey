#include <iostream>
int main()
{
    using namespace std;
    int i , j , k , n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        
        //space

        for ( j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        


        //numbers 

        for ( j = 0; j <= i; j++)
        {
            cout<<i+j+1<<"";
        }
        
       

        //reverse numbers 
        int start = 2*i;
        for ( j = 0; j <i; j++)
        {
            cout<<start;
            start--;
        }
        

         cout<<endl;



    }
    
    return 0;
}
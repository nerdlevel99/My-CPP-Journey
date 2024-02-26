#include <iostream>
int main()
{
    using namespace std;
    int arr[10] , n;
    cout<<"Enter the number of elements  : ";
    cin>> n;

    for ( int i = 0; i < n; i++)
    {
        cout<<"Enter value for arr [" << i+1<<"] : ";
        cin>>arr[i];
    }

    cout<<"The arrays are : ";
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i] <<"\t";
    }
    
    
    return 0;
}
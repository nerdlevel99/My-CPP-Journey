#include <iostream>
int main()
{
    using namespace std;
    int arr[] = { 1 , 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Doubles are : ";
    for ( int i = 0; i < n; i++)
    {
        // arr[i] *=2; // to use or comment out this 
        // cout<<arr[i] << " "; // and this 

        //or
        cout<< 2*arr[i] << " ";
    }
    
    return 0;
}
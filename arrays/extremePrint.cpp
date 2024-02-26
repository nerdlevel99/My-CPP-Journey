#include <iostream>
int main()
{
    using namespace std;
    int arr[] = { 1 , 2, 3, 4, 5, 6, 7, 8 , 9};
    int size = sizeof(arr)/sizeof(arr[0]);


    for ( int  i = 0; i < size/2; i++)
    {
        cout<<arr[i]<<arr[size-i-1];
    }
    
    return 0;
}
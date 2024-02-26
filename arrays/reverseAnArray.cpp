#include <iostream>
int main()
{
    using namespace std;
    int arr[] = { 1 , 2, 3, 4, 5, 6, 7, 8 , 9 , 10};
    int size = sizeof(arr)/sizeof(arr[0]);



    for ( int  i = 0; i < size/2; i++)
    {
        int j = size-1-i; 
       swap(arr[i] , arr[j]);
    }
     
     for ( int i = 0; i < size; i++)
     {
        cout<<arr[i]<<" ";
     }
     
    return 0;
}
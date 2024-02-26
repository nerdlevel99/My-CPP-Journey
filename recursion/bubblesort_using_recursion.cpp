#include <iostream>
using namespace std;

void bubble_sort(int arr[] , int n,  int m)
{
     if(n==0) return;

     if(m < n)
     {
        if(arr[m] > arr[m+1]) swap(arr[m] , arr[m+1]);
        bubble_sort(arr , n, m+1);
     }

     else 
     {
        bubble_sort(arr , n-1 , 0);
     }
}
int main()
{
    int arr[ ] = { 8 , 2 , 29 , 1 , 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr , size , 0);
    
    for(auto it : arr)
    {
        cout<<it << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

int binary(int arr[], int s, int e , int key)
{
    int mid = (s + e )/2;
   if (arr[mid] == key )
   {
    return mid;
   }
   
   else if (arr[mid]>key)
   {
        binary(arr , mid + 1 , e , key);
   }

   else
    binary(arr , s , mid-1 , key);

   
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int key = 4;
    int start = 0  , end = 4;


    cout<<binary(arr , start , end , key) ;
    return 0;
}
#include <iostream>
#include <limits>
using namespace std;
int maxi(int arr[] ,int i , int n , int max)
{
    if(i == n) return max;

    if(arr[i] > max) max = arr[i];


    maxi(arr , i+1 , n , max);

    
}


int main()
{
 
    int arr[] = {10 , 15 , 5 , 30 , 80 , 3 , 100, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0  , end = 4;
    int max = INT32_MIN;
    int i = 0;

    
    cout<<maxi(arr ,i , size , max) ;

    return 0;
}
  
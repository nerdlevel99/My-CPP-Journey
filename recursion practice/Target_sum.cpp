#include <iostream>
#include <limits.h>
using namespace std;

int minimum(int arr[], int size, int target)
{

    if(target == 0) return 0;
    if(target<0) return INT_MAX;

    int mini = INT_MAX;

    for(int i= 0; i < size; i++)
    {
        int ans = minimum(arr , size, target- arr[i]);
        if(ans!=INT_MAX)
        mini = min(mini , ans+ 1);
    }

    return mini;
    
}

int main()
{
    int arr[] = {1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum elements required are : " << minimum(arr, size, 5);
    return 0;
}
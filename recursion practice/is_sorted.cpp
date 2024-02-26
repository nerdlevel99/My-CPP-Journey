#include <iostream>
using namespace std;

bool check(int arr[], int i , int size)
{
    if (i >= size)
        return true; 

    if (arr[i] > arr[i + 1])
        return false;

    check(arr, i + 1 , size);
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6};

    check(arr, 0 , 5) == 1 ? cout << "The array is sorted" : cout << "array not sorted";
    return 0;
}
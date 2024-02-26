#include <iostream>
using namespace std;

bool check(int arr[], int n, int i)
{

    if (i == n - 1)
        return true;

    if (arr[i] > arr[i + 1])
        return false;

    check(arr, n, i + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7 ,  5 , 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = 4;
    int max = INT32_MIN;
    int i = 0;

    if (check(arr, size, i) == 0)
        cout << "array is not sorted" << endl;
    else
        cout << "This array is somehow sorted ";

    return 0;
}
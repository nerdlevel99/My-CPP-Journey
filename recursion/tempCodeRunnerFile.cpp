#include <iostream>
#include <limits.h>
using namespace std;

void selection_sort(int arr[], int n, int m, int max)
{
    if (n == 0)
        return;

    if (m < n)
    {
        if (arr[m] > max)
            max = arr[m];
        selection_sort(arr, n, m + 1, max);
    }

    else
    {
        swap(arr[n], max);
        selection_sort(arr, n - 1, 0, INT_MIN);
    }
}

int main()
{
    int arr[] = {8, 2, 29, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size, 0, INT_MIN);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
#include <iostream>
#include <limits.h>
using namespace std;

void selection_sort(int arr[], int n, int m, int max)
{
    if (n == 0)
        return;

    if (m < n)
    {
        if (arr[m] > arr[max])
            max = m;

        cout << "We got the max : by comparing " << arr[m] << "and " << max << " : " << max << endl;
        selection_sort(arr, n, m + 1, max);
    }

    else
    {

        swap(arr[n - 1], arr[max]);
        cout << "swapped : " << arr[n - 1] << "with" << max << endl;
        selection_sort(arr, n - 1, 0, INT_MIN);
    }
}

int main()
{
    int arr[] = {1, 2, 53, 2, 29, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size, 0, 0);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
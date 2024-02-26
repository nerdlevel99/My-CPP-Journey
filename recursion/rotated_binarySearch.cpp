#include <iostream>
using namespace std;

int search(int arr[], int s, int e, int n, int t)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;
    if (arr[mid] == t)
        return mid;

    else if (arr[s] <= arr[mid])
    {
        if (t >= arr[s] && t <= arr[mid])
            search(arr, s, mid - 1, n, t);
        else
            return search(arr, mid + 1, e, n, t);
    }
    else if (t >= arr[mid] && t <= arr[e])
        return search(arr, mid + 1, e, n, t);

    else
        return search(arr, s, mid - 1, n, t);
}

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = size - 1;
    cout << search(arr, s, e, size, 9);
    return 0;
}
#include <iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int target)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] >= target)
    {
        binary_search(arr, s, mid - 1, target);
    }

    else
        binary_search(arr, mid + 1, e, target);
}

int main()
{
    int arr[] = {1, 4, 8, 9, 19, 30};

    int target = 9;

    cout << "element found at index : " << binary_search(arr, 0, sizeof(arr) / sizeof(arr[0]), target);

    return 0;
}
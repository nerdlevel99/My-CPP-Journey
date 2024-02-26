#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 8, 9, 10, 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 9;

    int s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            cout << "Element found at index : " << mid;

        if (arr[mid] > arr[s])
        {
            if (arr[s] <= key && arr[mid] >= key)
                e = mid - 1;

            else
                s = mid + 1;
        }

        else
        {
            if (key>= arr[mid] && key <= arr[e])
                s = mid + 1;

            else
                e = mid - 1;
        }
    }

    return 0;
}
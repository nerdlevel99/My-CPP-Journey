#include <iostream>
#include <vector>
using namespace std;

void bubblesort(int arr[], int row, int col)
{
    if (row == 0)
        return;

    if (row >= col)
    {
        if (arr[col] < arr[col - 1])
            swap(arr[col], arr[col - 1]);
        bubblesort(arr, row, col + 1);
    }

    else
    {
        bubblesort(arr, row - 1, 0);
    }
}
using namespace std;
int main()
{
    int arr[] = {1, 93, 3, 2, 1, 99, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size - 1, 0);

    for (auto it : arr)
        cout << " " << it;
    return 0;
}
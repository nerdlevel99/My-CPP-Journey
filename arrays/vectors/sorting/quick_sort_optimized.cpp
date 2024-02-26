#include <iostream>

using namespace std;

int partition(int arr[], int s, int e)
{
    // Your code here

    int pivot = arr[e];
 
    int pivot_index = s;

    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[pivot_index], arr[i]);
            pivot_index++;
        }
    }

    swap(arr[pivot_index], arr[e]);

    return pivot_index;
}

void quickSort(int arr[], int s, int e)
{
    // code here

    if (s >= e)
        return;

    int p = partition(arr, s, e);

    cout << "p = " << p << endl;

    // quickSort(arr, s, p - 1);   n
    // quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {5, 2, 8, 1, 9, 6};

    quickSort(arr, 0, 5);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int pivot_index = arr[s];

    for (int i = s; i <= e; i++)
    {
        if (arr[i] > pivot_index)
        {
            swap(arr[i], arr[pivot_index]);
            pivot_index++;
        }
    }

    swap(arr[pivot_index], arr[e]);
    return pivot_index;
}

void quicksort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, s, p + 1);
}
int main()
{
    vector<int> arr{1, 3, 2, 4, 6, 5};
    cout << "unsorted Array :";

    for (auto it : arr)
        cout << it << " ";

    quicksort(arr, 0, arr.size() - 1);

    cout << "\nSorted Array :";
    for (auto it : arr)
        cout << it << " ";

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];

    int count = 0;

    for (int i =s+1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int pivot_index = s + count;
       swap(arr[pivot_index], arr[s]);

    int i = s, j = e;

    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] <= pivot)
            {
                i++;
            }


        while (arr[j] > pivot)
          {  j--;}

        if (i < pivot_index && j > pivot_index)
           { swap(arr[i++], arr[j--]);}
    }

    return pivot_index;
}

void quicksort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int pivot = partition(arr, s, e);

    quicksort(arr, s, pivot - 1);
    quicksort(arr, pivot + 1, e);
}
int main()
{
    vector<int> arr{4, 1, 5, 3, 2};
    int s = 0, e = arr.size() - 1;
    quicksort(arr, s, e);

    for (int i = 0; i <= e; i++)
    {
        cout<<arr[i] << " ";
    }
    

    return 0;
}
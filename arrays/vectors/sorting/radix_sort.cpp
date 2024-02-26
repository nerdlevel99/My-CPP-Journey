#include <iostream>
#include <vector>
#include <limits.h>
#include <math.h>
using namespace std;

int get_digits(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= maxi)
            maxi = arr[i];
    }

    return maxi;
}

void count_sort(vector<int> &arr, int exp)
{
    vector<int> count(10, 0);
    int n = arr.size();
    vector<int> sorted(arr.size());

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        sorted[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = sorted[i];
    }
}

int main()
{
    vector<int> arr{182, 39, 20, 1, 2930, 10, 29, 4, 1};

    int size = get_digits(arr);
    cout << "size = " << size << endl;
    for (int exp = 1; size / exp > 0; exp *= 10)
        count_sort(arr, exp);

    for (auto &i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
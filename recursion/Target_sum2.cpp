#include <iostream>
#include <limits.h>
using namespace std;

int find(int arr[], int target, int n)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;

    int result = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int ans = find(arr, target - arr[i], n);
        if (ans != INT_MAX)
            result = min(ans + 1, result);
    }
    return result;
}
int main()
{
    int arr[] = {1, 2, 3};
    int target = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Min number of elements required for sum is : " << find(arr, target, n);
    return 0;
}
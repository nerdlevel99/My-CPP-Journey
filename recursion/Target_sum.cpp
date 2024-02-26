#include <iostream>
#include <limits.h>
using namespace std;

int find(int arr[], int n, int target)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int ans = find(arr, n, target - arr[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }

    return mini;
}

int main()
{
    int arr[] = {1, 2 , 3};
    int n = 3, target = 5;
    int ans = find(arr, n, target);
    cout << "no. of min elements for target sum  are : " << ans;
    return 0;
}
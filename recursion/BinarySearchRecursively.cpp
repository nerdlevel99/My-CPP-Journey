#include <iostream>
using namespace std;

int bs(int arr[], int n, int s, int e, int t)
{
    int mid = s + (e - s) / 2;

    if (arr[mid] == t)
        return 1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = n - 1;
    cout << bs(arr, n, s, e, 10);
    return 0;
}
#include <iostream>
using namespace std;

void print(int arr[], int n, int i)
{

    if (i >= n)
        return;

    else
        cout << arr[i] << " ";

    print(arr, n, ++i);
}
int main()
{
    int i = 0;
    int arr[] = {10, 20, 30, 40, 50};
    print(arr, 5, i);
    return 0;
}
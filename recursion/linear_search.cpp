#include <iostream>
#include <vector>
#include <utility>
using namespace std;


vector<int> search(int arr[], int i, int n, int t)
{
    vector<int> v;

    if (i == n)
        return v;

    if (arr[i] == t)
        v.push_back(i);

     
    return v;
}

int main()
{
    int arr[] = {10, 14, 38, 2, 2, 2, 49, 19, 39};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v = search(arr, 0, n, 2);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

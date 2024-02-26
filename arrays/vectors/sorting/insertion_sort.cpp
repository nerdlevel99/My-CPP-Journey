#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 2, 4, 6, 5};
    cout << "unsorted Array :";

    for (auto it : arr)
        cout << it << " ";

    for (int i = 1; i < arr.size(); i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }

    cout << "\nSorted Array :";
    for (auto it : arr)
        cout << it << " ";

    return 0;
}
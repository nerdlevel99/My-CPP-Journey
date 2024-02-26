#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{8, 29, 2, 01, 1, 29, 21, 0, 1};
    bool flag = true;

    for (int i = 0; i < arr.size(); i++)
    {
        int mini = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] <= arr[mini])
            {
                mini = j;
            }
        }

        cout << "swapped " << arr[mini] << " with " << arr[i] << endl;
        swap(arr[i], arr[mini]);
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}
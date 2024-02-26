#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int s = 0, e = arr.size()-1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] < target)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    int target = 3;
    if (binarySearch(arr, target) == -1)
    {
        cout << "Element is not present in the array  ";
    }

    else
        cout << "target found at " << binarySearch(arr, target);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int first(vector<int> arr, int occ)
{
    int s = 0, e = arr.size() - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == occ)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (arr[mid] < occ)
        {
            s = mid + 1;
        }

        else
        {f
            e = mid - 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr{1, 7, 7, 7, 7, 8, 8, 9, 9};
    int occ = 9;

    if (first(arr, occ) == -1)
        cout << "element not found";

    else
        cout << "Element is first occured at " << first(arr, occ);
    return 0;
}
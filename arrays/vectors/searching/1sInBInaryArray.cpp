#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 0, 0, 0, 1, 1, 1, 1, 1};
    int s = 0, e = arr.size() - 1, last;
    int n = arr.size();

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == 0)
        {
            last = mid;
            s = mid + 1;
        }

        else if (arr[mid] > 0)
            e = mid - 1;

        else
            s = mid + 1;
    }

    cout << "No. of 1s are : " << n - (last + 1);

    return 0;
}
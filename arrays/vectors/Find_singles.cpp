#include <iostream>
#include <vector>
using namespace std;

int Repeating_element(vector<int> arr)
{
    int s = 0, e = arr.size() - 1, ans = -1, count = 0;
    while (s <= e)
    {
        count++;
        int mid = (s + e) / 2;
        cout << "Iteration : " << count << "\tstart = " << s << "\tend = " << e << "\tMid = " << mid << endl;
        if (s == e)
        return arr[s];

            else if (mid % 2 == 0)
            {
                if (arr[mid] == arr[mid + 1])
                {
                    // search in right
                    s = mid + 2;
                }

                else
                    e = mid;
            }

        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                // search in left
                s = mid + 1;
            }

            else
                e = mid - 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 600 , 600 , 1};
    int s = 0, e = arr.size() - 1, ans;

    cout << Repeating_element(arr);
}
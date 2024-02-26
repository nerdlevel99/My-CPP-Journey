#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_sol(vector<int> arr, int prata, int sol)
{
    int p = 0;
    

    for (int i = 0; i < arr.size(); i++)
    {
        int time = 0;
        int rank = arr[i], j = 1;
        while (time + (rank * j) <= sol)
        {
            p++;
            time += rank * j;
            j++;
        }
    }

    return p >= prata;
}

int main()
{
    vector<int> arr{1 };
    int cook = 1, prata = 8;
    int s = 0, e = arr[cook - 1] * (prata *(prata+1)/2);
    // cout<<e;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (is_sol(arr, prata, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    cout << ans;

    return 0;
}

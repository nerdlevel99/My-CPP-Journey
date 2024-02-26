#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            swap(arr[i][j], arr[n - i - 1][j]);
        }

        cout << endl;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
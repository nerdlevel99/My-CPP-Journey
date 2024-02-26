#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cout << "Enter the term you want matrix of : ";
    cin >> n;
    vector<vector<int>> arr(5, vector<int>(5, n));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //         cout<<arr[i]<<" ";

    // }

    return 0;
}
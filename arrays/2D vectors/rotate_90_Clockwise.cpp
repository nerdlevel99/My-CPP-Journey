#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{ 1 , 2, 3} , { 4, 5, 6} , { 7 , 8 , 9}};
    int n = matrix.size();
    for (int i = 0; i < n / 2+1 ; i++)
    {
        for (int j = i; j < matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }

        // cout << endl;
    }

     for (int i = 0; i < n / 2 ; i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[n-i-1][j]);
        }

        // cout << endl;
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
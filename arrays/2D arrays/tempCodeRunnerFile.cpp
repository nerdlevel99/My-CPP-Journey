#include <iostream>
using namespace std;

void printArray(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}
int main()
{
    int arr[3][2] = {{1, 2}, {4, 5}, {7, 8}};
    int row = 3, col = 2;
    int trans[col][row];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }
    printArray(trans, col, row);
    cout << endl;
    printArray(arr, row, col);

    return 0;
}
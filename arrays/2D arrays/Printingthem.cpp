#include <iostream>
using namespace std;

void Column_Print(int arr[][2], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }
}

void row_print(int arr[][2], int row, int col)
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
    cout << "Columnwise Print" << endl;
    Column_Print(arr, row, col);
    cout << "Row Wise Print" << endl;
    row_print(arr, row, col);

    return 0;
}
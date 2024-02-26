#include <iostream>
using namespace std;

void triangle(int arr[], int rows, int col)
{
    if (rows == 1)
        return;

    if (col < rows)
    {
        triangle(arr, rows, col + 1);

        if (arr[col] > arr[col + 1])
       {     swap(arr[col], arr[col + 1]);}

        
    }

    else
    {
        triangle(arr, rows - 1, 0);
    }
}
int main()
{
    int arr[] = {2, 3, 2, 39, 3};
    triangle(arr, sizeof(arr) / sizeof(arr[0]) -1, 0);

    for (int i = 0; i < 5; i++)
    {
        cout << i[arr] << " ";
    }

    return 0;
}
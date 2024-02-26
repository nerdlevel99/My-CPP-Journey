#include <iostream>
using namespace std;

void print(int row, int col)
{

    if (row == 0)
    {
        cout << endl; 
        return;
    }

    if (col < row)
    {
        print(row, col + 1);
        cout << col+1;
    }
    else
    {
        print(row - 1, 0);
        cout << endl;
    }
}
int main()
{
    print(4, 0);
    return 0;
}
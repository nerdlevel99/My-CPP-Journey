#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<char>> &board, int n)
{
    cout<<"Possible solution is : " << endl <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl<<endl;
}

bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{

    int i = row, j = col;
    // check rows
    while (j >= 0)
    {
        if (board[i][j--] == 'Q')
            return false;
    }

    i = row, j = col;

    // check upper left diagonal
    while (j >= 0 && i >= 0)
    {
        if (board[i--][j--] == 'Q')
            return false;
    }

    i = row, j = col;

    // check upper left diagonal
    while (j >= 0 && i < n)
    {
        if (board[i][j] == 'Q')
            return false;

            i++;
            j--;
    }


    return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{
    if (col >= n)
    {
        print(board, n);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            solve(board, col + 1, n);
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    solve(board, 0, n);
    return 0;
}
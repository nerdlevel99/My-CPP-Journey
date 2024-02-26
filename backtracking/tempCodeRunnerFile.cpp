#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<int>> board, int row, int col, int n)
{

    int i = row, j = col;
    // check rows
    while (j >= 0)
    {
        if (board[i][j--] == 1)
            return false;
    }

    i = row, j = col;

    // check upper left diagonal
    while (j >= 0 && i >= 0)
    {
        if (board[i--][j--] == 1)
            return false;
    }

    i = row, j = col;

    // check upper left diagonal
    while (j >= 0 && i >= 0)
    {
        if (board[i--][j--] == 1)
            return false;
    }

    // check lower left diagonal
    while (j >= 0 && i >= 0)
    {
        if (board[i++][j--] == 1)
            return false;
    }

    return true;
}

void solve(vector<vector<int>> &board, int col, int n)
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
            board[row][col] = 1;
            solve(board, col + 1, n);
            board[row][col] = 0;
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<string> ans;
    string output;
    solve(board, 4, n);
    return 0;
}
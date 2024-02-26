#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[4][4], int sr, int sc, int er, int ec, string s)
{
    if (sr < 0 || sc < 0)
        return;
    if (sr < 0 || sc < 0 || sr > er || sc > ec)
        return;

    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }

    if (arr[sr][sc] == 0)
        return;

    // Mark the current cell as visited
    arr[sr][sc] = 0;

    // Move down
    if (sr + 1 <= er && arr[sr + 1][sc] == 1)
    {
        solve(arr, sr + 1, sc, er, ec, s + 'D');
    }

    // Move right
    if (sc + 1 <= ec && arr[sr][sc + 1] == 1)
    {
        solve(arr, sr, sc + 1, er, ec, s + 'R');
    }

    // Move left
    if (sc - 1 >= 0 && arr[sr][sc - 1] == 1)
    {
        solve(arr, sr, sc - 1, er, ec, s + 'L');
    }

    // Move up
    if (sr - 1 >= 0 && arr[sr - 1][sc] == 1)
    {
        solve(arr, sr - 1, sc, er, ec, s + 'U');
    }

    // Mark the current cell as unvisited (backtrack)
    arr[sr][sc] = 1;
}

int main()
{
    int rows = 3, cols = 3;
    int arr[4][4] = {{1, 0, 0, 0},
                     {1, 1, 0, 1},
                     {1, 1, 1, 0},
                     {0, 1, 1, 1}};

    int sr = 0, sc = 0, er = 3, ec = 3;
    string s;

    solve(arr, sr, sc, er, ec, s);

    return 0;
}

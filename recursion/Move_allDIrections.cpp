#include <iostream>
#include <vector>
using namespace std;

void solve(int sr, int sc, int er, int ec, string s, vector<vector<bool>> &flag)
{
    if (sr < 0 || sc < 0 || sr > er || sc > ec)
        return;

    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }

    // Mark the current cell as visited
    flag[sr][sc] = false;

    // Move down
    if (sr + 1 <= er && flag[sr + 1][sc] == true)
    {
        solve(sr + 1, sc, er, ec, s + 'D', flag);
    }

    // Move right
    if (sc + 1 <= ec && flag[sr][sc + 1] == true)
    {
        solve(sr, sc + 1, er, ec, s + 'R', flag);
    }

    // Move left
    if (sc - 1 >= 0 && flag[sr][sc - 1] == true)
    {
        solve(sr, sc - 1, er, ec, s + 'L', flag);
    }

    // Move up
    if (sr - 1 >= 0 && flag[sr - 1][sc] == true)
    {
        solve(sr - 1, sc, er, ec, s + 'U', flag);
    }

    // Mark the current cell as unvisited (backtrack)
    flag[sr][sc] = true;
}

int main()
{
    int rows = 3, cols = 3;
    vector<vector<bool>> flag(rows, vector<bool>(cols, true));
    int sr = 0, sc = 0, er = rows - 1, ec = cols - 1;
    string s = "";

    solve(sr, sc, er, ec, s, flag);

    return 0;
}

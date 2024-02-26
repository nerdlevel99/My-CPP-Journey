#include <iostream>
using namespace std;

void solve(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
    {
        return;
    }

    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }

    // Move down
    solve(sr + 1, sc, er, ec, s + 'D');

    // Move right
    solve(sr, sc + 1, er, ec, s + 'R');
}

int main()
{
    int sr = 0, sc = 0, er = 1, ec = 1;
    string s = "";
    solve(sr, sc, er, ec, s);

    return 0;
}

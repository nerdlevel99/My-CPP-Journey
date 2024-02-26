#include <iostream>
#include <limits.h>
using namespace std;

int solve(int x, int y, int z, int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;

    int a = solve(x, y, z, n - x) + 1;
    int b = solve(x, y, z, n - y) + 1;
    int c = solve(x, y, z, n - z) + 1;

    int ans = max(a, max(b, c));

    if (ans < 0)
        ans = 0;

    return ans;
}
int main()
{
    int x = 3, y = 3, z = 3, n = 7;
    cout << "NO. of combinations can be : " << solve(x, y, z, n);
    return 0;
}
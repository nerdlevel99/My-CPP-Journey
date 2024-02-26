#include <iostream>
#include <limits.h>
using namespace std;

int solve(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;

    int maxi = INT_MIN;

    int ans = solve(n - x, x, y, z);
    if (ans != INT_MIN)
        maxi = max(maxi, ans + 1);

    ans = solve(n - y, x, y, z);
    if (ans != INT_MIN)
        maxi = max(maxi, ans + 1);

    ans = solve(n - z, x, y, z);
    if (ans != INT_MIN)
        maxi = max(maxi, ans + 1);

    return maxi;
}

int main()
{
    int n = 7, x = 2, y = 2, z = 1;
    cout << solve(n, x, y, z);
    return 0;
}
#include <iostream>
using namespace std;

int fact(int n, int ans)
{
    if (n == 0)
        return ans;

    else
        return fact(n - 1, n * ans);
}
int main()
{
    int n = 5;
    cout << fact(n, 1);
    return 0;
}
#include <iostream>
using namespace std;

int countPartitions(int n, int m)
{
    // Base case: If n is 0, there is one way (no partition).
    if (n == 0)
    {
        cout << "in condition one  " << endl;

        return 1;
    }

    // If n is less than 0 or m is less than 1, no valid partition.
    if (n < 0 || m < 1)
    {
        cout << "in condition two" << endl;

        return 0;
    }

    // Recursively count the partitions by either using m or not using it.
    int withM = countPartitions(n - m, m);

    int withoutM = countPartitions(n, m - 1);

    return withM ;
}

int main()
{
    int n = 3, m = 4;
    int ways = countPartitions(n , m);
    cout << "The number of ways to partition " << n << " using parts up to " << m << " is " << ways << endl;
    return 0;
}

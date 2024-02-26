#include <iostream>
int main()
{
    using namespace std;
    int n = 5, i, j;
    for (i = 1; i < 2 * n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (i <= n)
            {
                if (j <= i || j > 2 * n - i)
                    cout << "*";

                else
                    cout << " ";
            }

            else
            {
                if (j <= 2 * n - i || j >= n - i)
                    cout << "*";

                else
                    cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
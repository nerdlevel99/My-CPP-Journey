#include <iostream>
int main()
{
    using namespace std;
    int i, j, k, n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (i = 0; i <= n + n - 1; i++)
    {
        for (j = 0; j < n + n; j++)
        {

            if (i <= n)
            {
                if (j <= i || j >= (n + n - 1 - i))
                    cout << "* ";

                else
                {
                    cout << "  ";
                }
            }

            else if (i > n)
            {

                if (j <= (n + n - i - 1) || j >= i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }

        return 0;
}
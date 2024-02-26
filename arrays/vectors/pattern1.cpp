#include <iostream>
int main()
{
    using namespace std;
    int n = 5, k;

    for (int i = 0; i < 2 * n; i++)
    {
        if (i > n)
            k = 2 * n - i;
        else
            k = i;


        for (int j = 0; j < k; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
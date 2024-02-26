#include <iostream>
int main()
{
    using namespace std;
    int i, j, k, n;
    cout << "Enter the value for n : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (j = 0; j <= i * 2; j++)
        {
            if (i == n - 1 || i == 0)
                cout << "*";
            else
            {
                if (j == 0 || j == i * 2 )
                    cout << "*";
                else
                    cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
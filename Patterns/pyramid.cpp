#include <iostream>
int main()
{
    using namespace std;
    int i, j, k, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {

        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
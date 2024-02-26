#include <iostream>
int main()
{
    using namespace std;
    int i, j, k, n;
    cout << "Enter the value of N : ";
    cin >> n;

    k = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << k;
            k++;
            if (j<i)
            {
                cout<<"*";
            }
            
        }
        cout << endl;
    }

    int start = k - n;
    for (i = 0; i < n; i++)
    {
        k = start;

        for (j = 0; j < n - i; j++)
        {
            cout << k;
            k++;

            if (j<n-i-1)
            {
                cout<<"*";
            }
            
        }
        start = start - (n - i - 1);
        cout << endl;
    }

    return 0;
}
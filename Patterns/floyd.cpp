#include <iostream>
int main()
{
    using namespace std;
    int i, j, k, n;
    cout << "Enter the value of n : ";
    cin >> n;
    k = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << k<<" ";
            k++;
        }
        cout << endl;
    }

    return 0;
}
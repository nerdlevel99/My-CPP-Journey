#include <iostream>
int main()
{
    using namespace std;
    int i, j, k, n;
    cout<<"Enter the number : ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        k = 1;
        for (j = 1; j <= i; j++)
        {
            cout << k << " ";
            k = k * (i - j) / j;
        }
        cout<<endl;
    }

    return 0;
}
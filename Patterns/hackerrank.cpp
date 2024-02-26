#include <iostream>
int main()
{
    using namespace std;
    int n, i, j, min;
    cout << "Enter the 'n' : ";
    cin >> n;

    int size = 2 * n - 1;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i < size - i - 1)
                min = i;
            else
                min = size - i - 1;

            if (min > j)
                min = j;

            if (min > size - j - 1)
                min = size - j - 1;

            cout << n - min << " ";
        }
        cout << endl;
    }

    return 0;
}
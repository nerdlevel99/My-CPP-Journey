#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout<<"Enter the number : ";
    cin >> n;
    for (int i = 1; i <= n * 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= n)
            {
                if (j < i)
                    cout << " ";
                else
                    cout << "* ";
            }

            else
            {
                if (j <= n * 2 - i)
                    cout << " ";
                else
                    cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}
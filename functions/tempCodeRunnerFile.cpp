#include <iostream>

void prime(int n)
{
    using namespace std;

    int flag = 0;
    cout << "Prime numbers are : ";
    for (int i = 1; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (i % j == 0)
                flag = 1;
        }

        if (flag == 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    using namespace std;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    prime(n);
    return 0;
}
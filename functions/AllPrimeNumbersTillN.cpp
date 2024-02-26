#include <iostream>

void prime(int n)
{
    using namespace std;
int flag;
    cout << "Prime numbers are : ";
    for (int i = 1; i <= n; i++)
    {
        flag = 0;
        for (int j = 1; j <=n; j++)
        {
            if (i % j == 0)
                flag ++;
        }

        if (flag <=2)
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
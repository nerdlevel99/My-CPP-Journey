#include <iostream>

void prime(int n)
{
    using namespace std;

    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            flag = 1;
    }

    if (flag == 0)
    {
        cout << n << " is a prime number" << endl;
    }
    else
        cout << n << " is a not  prime number" << endl;
}
int main()
{
    using namespace std;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    prime(n);
    return 0;
}
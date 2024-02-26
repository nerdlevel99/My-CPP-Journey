#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;

    print(n / 10);
    cout << n % 10 << " ";
}
using namespace std;
int main()
{
    int number = 1232;
    print(number);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{

    int num, precision, ans;
    cout << "Enter the number you want input of : ";
    cin >> num;

    cout << "Enter the p recision : ";
    cin >> precision;

    int s = 0, e = num, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (mid * mid <= num)
        {
            ans = mid;
            s = mid + 1;
        }

        else
            e = mid - 1;
    }

    double step = 0.1;
    double Final = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = Final; j*j <= num; j += step)
        {
            Final = j;
        }
        step /= 10;
    }
    cout << "Square root of " << num << "is" << Final;

    return 0;
}
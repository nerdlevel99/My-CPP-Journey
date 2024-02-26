#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{1};

    int n = 5;

    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = arr.size() - 1; j >= 0; j--)
        {
            int x = arr[j] * i + carry; 
            arr[j] = x % 10;
            carry = x / 10;
        }

        while (carry)
        {
            arr.insert(arr.begin(), carry % 10);

            carry /= 10;
        }
    }



    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}
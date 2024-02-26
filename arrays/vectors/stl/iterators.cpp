#include <iostream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << (*it);
    }

    cout << endl
         << endl;
    for (auto &value : arr)
    {
        cout << value;
    }
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    int arr[10] = {1, 2, 3, 4, 5};

    cout << "first 5 values are initialised here " << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    int brr[10] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 10; i++)
        cout << brr[i] << " ";
    return 0;
}
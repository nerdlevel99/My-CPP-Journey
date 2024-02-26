#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> arr{0, 0, 1, 0, 0, 1, 1, 1, 0 , 0 ,  0  , 0 , 0 };
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (i <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }

        else
        {
            swap(arr[i], arr[end]);
            i++;
            end--;
        }
    }

    for (i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
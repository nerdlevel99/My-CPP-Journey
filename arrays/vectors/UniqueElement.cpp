// in this problem : there is repeating elements expect 1 find that element

// we will be using XOR operator to cancel out same elements

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> arr)
{
    int result = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        result = result ^ arr[i];
    }
    if (result == 0)
        return -1;

    else
        return result;
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    if (search(arr) == -1)
        cout << "Element not found";

    else
        cout << "The number " << search(arr) << " is unique one in the array";

    return 0;
}
#include <iostream>
#include <vector>

int uniqueElement(vector<int> arr)
{
    int result = 0;
    for (int num : arr)
    {
        result ^= num;  // XOR operation
    }
    return result;
}

int main()
{
    using namespace std;
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    int element = uniqueElement(arr);
    cout << "Unique element: " << element << endl;
    return 0;
}

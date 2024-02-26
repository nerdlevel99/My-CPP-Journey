#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 2, 2, 1, 9, 9, 1, 3, 9, 2};
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> sorted_arr{0, 2, 2, 1, 9, 9, 1, 3, 9, 2};

    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }

    int sum = 0;
    for (int i = 1; i <= 9; i++)
    {

        count[i] += count[i - 1];
    }

    for (int i = arr.size() - 1; i >=0 ; i--)
    {
        sorted_arr[--count[arr[i]]] = arr[i];
    }


    for (int i = 0; i < sorted_arr.size(); i++)
    {
        cout << sorted_arr[i] << " ";
    }

    return 0;
}
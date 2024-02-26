#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1  ,2 , 3, 4, 5, 6};
    int size = 6;
    for ( int i = size; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }
        arr[0] = 9;

    return 0;
}

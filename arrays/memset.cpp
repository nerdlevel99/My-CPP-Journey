#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
// memset in c++ is used to initialse a given array with the given value
int main()
{
    using namespace std;

    char arr[10];
    int a[10];
    memset(arr, '2', sizeof(arr)); // using memset

    cout << "Character array is : " << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "  ";

    memset(a, 0, sizeof(a)); // using memset

    cout << endl
         << "Integer array is : " << endl;

    for (int i = 0; i < 10; i++)
        cout << a[i] << "  ";

    return 0;
}
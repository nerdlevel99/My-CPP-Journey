#include <utility>
#include <iostream>
using namespace std;
int main()
{
    pair<int, string> p;
    p = {2, "abhi"};

    cout << p.first << " " << p.second << endl;

    pair<string, string> p1;
    p1 = {"abhi", "sharma"};

    cout << p1.first << " " << p1.second;

    pair<int, int> arr[10];
    arr[0] = {6, 9};
    arr[1] = {9, 6};
    arr[2] = {6, 9};

    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first<<" " << arr[i].second <<endl;
    }
    
    return 0;
    
}
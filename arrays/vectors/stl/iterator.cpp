#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    vector<int>::iterator it = arr.begin();

    for (int i = 0; i < arr.size(); ++i)
        cout << (*it+i) << endl;
    return 0;
}
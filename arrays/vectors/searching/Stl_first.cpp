#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1, 3, 5, 6, 8, 8, 8, 8, 8, 9};
    auto first = lower_bound(v.begin(), v.end(), 8);
    
    cout<<"the answer is : " << first - v.begin()<<endl;
    return 0;
}
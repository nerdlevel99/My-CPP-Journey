#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <vector <int>> arr{ { 1, 2, 3} , { 4, 5, 6}};
    vector<int> arr1 { 1 , 2,3,4 ,5,6,7,8 ,9};
    
    for(auto &r  : arr)
    {
        for(auto & c : r)
        {
            cout<<c << " ";
        }
    }
    cout<<"\nArray - 2 : " << endl;
 
    for(auto &it : arr1 )
    cout<<it << " ";

    
    return 0;
}
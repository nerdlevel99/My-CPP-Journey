#include <iostream>
#include <vector>
using namespace std;

void sum(vector<int> arr, int i, int &ans, int add)
{

   if(ans == arr.size())
   {
        ans = max(ans , add);
        return
   }

   sum(arr , i+2 , ans+arr[i] , add);
   sum(arr , i+1 , ans , add);
}
int main()
{
    vector<int> arr{2, 1, 4, 9};
    int ans = 0;
    sum(arr, 0, ans, 0);
    cout << ans;
    return 0;
}
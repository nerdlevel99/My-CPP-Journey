#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr{ 10 , 3, 40 , 20 , 50 , 70 };
    int s = 0 , e = arr.size() - 1; 
    int target = 20 , ans;
    while (s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]==target)
        ans = mid;

         if (mid+1 <arr.size() && arr[mid + 1]==target)
        ans = mid + 1;

         if (mid-1 > 0 &&arr[mid - 1]==target)
        ans = mid - 1;

        else if(arr[mid] > target)
        {
            //search in left
            e = mid -2;
        }

        else s = mid +2;

    }
    cout<<target<<"found at location " << ans;
    return 0;
}
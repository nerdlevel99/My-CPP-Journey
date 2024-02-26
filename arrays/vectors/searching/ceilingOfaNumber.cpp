#include <iostream>
#include <vector>
using namespace std;


int ceil(vector <int> arr ,int target)
{
    int s = 0 , e = arr.size() - 1 , ans = -1;
    while (s <= e)
    {
       int mid = s + (e-s)/2;
       if(arr[mid]>= target ) 
       {
        ans = mid;
        e = mid -1;
       }

       else
       {
        if(arr[mid] < target) s = mid + 1;
       }
    
    }

    return arr[ans];
    
}
int main()
{
    vector <int> arr{ 2 , 3, 6, 8, 10 , 19};
    int target = 4;
    cout<< ceil(arr , target);
    return 0;
}
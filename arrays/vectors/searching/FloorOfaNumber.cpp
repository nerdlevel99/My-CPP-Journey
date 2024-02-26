#include <iostream>
#include <vector>
using namespace std;


int floor(vector <int> arr ,int target)
{
    int s = 0 , e = arr.size() - 1 , ans = -1;
    while (s <= e)
    {
       int mid = s + (e-s)/2;
       if(arr[mid]> target ) 
       {
        e = mid -1;
       }

       else
       {
        ans = mid;
        s = mid + 1;

       }
    
    }

    return arr[ans];
    
}
int main()
{
    vector <int> arr{ 2 , 3, 6, 8, 10 , 19};
    int target = 4;
    cout<< floor(arr , target);
    return 0;
}
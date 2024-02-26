#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int> arr , int x )
{
    int s =0 , e = arr.size()-1 , first;

    while (s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] >= x)
        {
            first = mid;
            e = mid -1;
        }

        else  s = mid + 1;
    }

    return first;
    
}
int main()
{
    vector <int> arr{ 12 , 16 , 22, 30 , 35 , 39 , 42, 45, 48 , 50 , 53, 55 , 56};
    int k =4;
    int x = 35;
    int lb = lower_bound(arr , x);
    int h = lb, l = lb-1;
    vector<int> ans;
    
    while(h-l <= k)
    {
        if(x - arr[l] == 0 || arr[h] - x ==0)
        {
            h++; k++;
        }
        if(x-arr[l] > arr[h] - x)
        {
            ans.push_back(arr[h]);
            h++;
        }
        else
        {
            ans.push_back(arr[l]);
            l--;
        }
    }
    
    for(auto it : ans) 
    cout<<it << " ";

    return 0;
}
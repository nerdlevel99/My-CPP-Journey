#include <iostream>
#include <vector>

using namespace std;
int bs(int s , int e , int target , vector<int> arr)
{
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid] == target) return mid;

        else if(arr[mid] > target) e = mid-1;

        else s = mid + 1; 

        
    }
    return -1;
}
int main()
{
    vector<int> arr{ 1 , 3, 5, 7  , 9 , 11 , 14 , 18 , 20 , 48 , 50 , 103};
    int s = 0 , e = arr.size()-1 ;
    int target = 103; 
    int i =1;
    if(arr[i] == target)
    {  cout<< "found at " << i<<"th position"<<endl;
        cout<<endl;
        }

    while(i<arr.size() && arr[i] <= target )
    {
        i = i*2;
    }

    cout<< bs(i/2 , min(e , i) , target, arr);

    return 0;
}
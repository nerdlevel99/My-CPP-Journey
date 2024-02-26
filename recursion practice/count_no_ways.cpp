#include <iostream>
using namespace std;

int solve(int arr[] , int size , int target )
{
    if(target == 0) return 1;
    if(target<0) return 0;

    int ways = 0;

    for(int i= 0; i < size; i++)
    {
        ways += solve(arr , size , target- arr[i]); 
    }

    return ways;
}

int main()
{
    int arr[] = { 1 ,2 , 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int ans = solve(arr , size , target );
    cout<<"NO. of ways to make the number " << target << " using the array is : "<< ans;

    
    return 0;
}
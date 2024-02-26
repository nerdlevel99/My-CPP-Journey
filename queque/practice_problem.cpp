#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k= 2;
    vector<int> arr = { 61 , 23 , 38 , 23, 56, 40, 82, 56, 82 , 82, 82, 70, 8, 69, 8, 7, 19, 14, 58 ,42, 82, 10 , 82 , 78, 15, 82
    };
    int n= arr.size();

    int max_element = arr[0];
    int count = 0 , ans= 0;


    for(int i=0; i< arr.size() ; i++)
    {
        if(arr[i] > max_element)
        {
            max_element = arr[i];
            count = 1;
        }

        else if(arr[i] == max_element) count++;

    }

    int temp= count;
    if(count >=k) ans++;

    cout<<"count is : " << count << endl;

    for(int i=0; i < n; i++)
    {
        if(count >=k) ans++;
        if(arr[i] == max_element) count--;
    }
    count = temp;

    for(int i = n-1 ; i >= 0; i--) 
    {
        if(count >= k) ans++;
        if(arr[i] == max_element) count--;

    }

    cout<<"Ans is : " << ans;
    return 0;
}
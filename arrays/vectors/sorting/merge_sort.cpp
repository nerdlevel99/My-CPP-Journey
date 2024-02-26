#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>&arr , int s , int e)
{
    int mid = s + (e-s)/2;
    int size_1 = mid -s + 1;
    int size_2 = e -mid;

    vector<int> left(size_1);
    vector<int> right(size_2); 

    int k = s;

    for(int i = 0; i < size_1; i++)
    {
        left[i] = arr[k++];
    }

    for(int i = 0; i < size_2; i++)
    {
        right[i] = arr[k++];
    }

    int i = 0 , j = 0 ; k = s;

    while(i < size_1 && j < size_2)
    {
        if(left[i] > right[j])
        {
            arr[k++] = right[j++];
        }

        else
        {
            arr[k++] = left[i++];
        }
    }

    while(i< size_1)
    { 
        arr[k++] = left[i++];
    }

    while(j < size_2)
    {
        arr[k++] = right[j++];
    }


}

void merge_sort(vector<int> &arr , int s  , int e)
{
    if(s>=e) return;

    int mid = s + (e-s)/2;

    // sort left 
    merge_sort(arr , s , mid);
    merge_sort(arr , mid+1 , e); 

    merge(arr , s , e);
}
int main()
{
    vector<int> arr{ 4 , 3 ,1, 0 , 28 , 3};
    int s = 0; 
    int e = arr.size()-1;
    merge_sort(arr , s , e);
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    return 0;
}
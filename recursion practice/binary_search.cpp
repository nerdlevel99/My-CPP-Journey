#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int s, int e, int target)
{
    if(s>e) return -1;
    
        int mid = s + (e-s)/2;
        if (target == arr[mid]) return mid;

        if(target < arr[mid]) return search(arr  , s, mid-1 , target);

        else if(target > arr[mid]) return search(arr  , mid + 1, e , target);


}
int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 10};
    int target = 101;
    int index = search(arr, 0, arr.size() - 1, target);
    index != -1 ? cout << "Element found at index " << index : cout << "element not found ";
    return 0;
}
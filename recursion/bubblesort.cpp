#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int largest(vector<int> arr, int size)
{
    int large = arr[0], pos = -1;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] >= large)
        {
            large = arr[i];
            pos = i;
        }
    }
    return pos;
}

void bubblesort(vector<int> &arr, int size)
{
    if (size <= 0)
        return;
        
    int large = largest(arr, size);
    
    if(arr[size] < arr[size-1])
    {
    swap(arr[size], arr[size-1]);
    // bubblesort(arr, size - 1);

    }

    else{
        bubblesort(arr , size+1);
    }
    

}

int main()
{

    vector<int> arr{4,3,2,1};
    int size = arr.size() - 1;
    cout<<"Before bubble sort : " <<endl;
    for (auto it : arr)
        cout << it << " ";

    cout<<endl;
    bubblesort(arr, size);

    cout<<"after bubble sort : " <<endl;
    for (auto it : arr)
        cout << it << " ";
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{ 2 ,2, 0 , 0, 1, 2, 1, 1 ,1 };
    int start = 0, i = 0, end = arr.size() -1;
    while (i <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        } 
        
        else if(arr[i] == 2)
        {
            swap(arr[i] , arr[end]);
            end--;
        }

        else
        i++; 
      
    }

    cout<<endl;

    for (i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
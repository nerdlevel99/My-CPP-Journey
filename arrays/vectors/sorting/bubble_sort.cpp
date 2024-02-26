#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr{ 8 , 29 ,  2, 01 ,  1 , 29 , 21 , 0 ,1};
    bool flag = true;

    for(int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i-1 ; j++)
        {
           if (arr[j] > arr[j+1])
           {
            swap(arr[j] , arr[j+1]);
            flag = false;
           }
           
        }
        
        if(flag == true) break;
    }

    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr{-1 , 7 , 5 , -3 , 2 , 1, -6};
    int s=0 ,e=arr.size()-1 , i=0 ;
    while (s<=e)
    {
        if(arr[s]<0)
        {
            swap(arr[s] , arr[s]);
            s++;
        }

        else if(arr[s]>=0)
        {
            swap(arr[s] , arr[e]);
            e--;
        }

       
        
        
    }

     for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i] <<" ";
        }

    return 0;
}
#include <iostream>
#include <limits.h>

void max(int arr[] , int size )
{
    using namespace std;

    int max = INT_MIN;
    int position;

  for (int i = 0; i < size; i++)
  {
    if (max<=arr[i])
    {
        max = arr[i];
        position = i;
    }
    
  }

    cout<<"Max element is "<<max << " located at " <<position + 1<<endl;
    
 
}
int main()
{
    
    using namespace std;
    int arr[] = { 1 , 2, 3, 126, 5, 6, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    max(arr , size);
    return 0;
}
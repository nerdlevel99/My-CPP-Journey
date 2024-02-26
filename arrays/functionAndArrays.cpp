#include <iostream>

// array always gets calls by reference 
void byvalue(int a[])
{   
    using namespace std;
    
    a[1] +=  10; 
    cout<<a[1]; 
}




int main()
{
    using namespace std;
    int arr[] = { 1 , 2, 3, 4,5 };
    byvalue(arr);
    cout<<endl<<arr[1]<<endl;

    return 0;
}
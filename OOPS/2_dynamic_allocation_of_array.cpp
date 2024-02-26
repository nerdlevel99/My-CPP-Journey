#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements you want in array : ";
    cin>>n;

    int *arr = new int(n); // dynamically allocating the size of n numbers in 

    for(int i= 0; i< n; i++)
    {
        arr[i] = i+10;
    }

    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" , ";
    }

    cout<<endl<<endl;

    cout<<"Before deleting : ";
    cout<<arr[1] <<endl;
    
    delete arr;
    
    cout<<"After deleting : ";
    cout<<arr[1];

    float*p = new float;

    *p = 69.69;

    cout<<*p;

    delete p;


    return 0;
}
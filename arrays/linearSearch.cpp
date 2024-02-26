#include <iostream>

void search(int arr[] ,int size ,  int element )
{
    using namespace std;
    int position , count=0;

    cout<<endl<<endl;
    for ( int  i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
             count++;
             cout<<i<<" , ";

        }
    }
        if(count!=0)
        cout<<" are the locations where "<<element<<" is presented . Hence it is presented " <<count <<" times";
        else
        cout<<element<<" is not present in the array "<<endl;
}


int main()
{
    using namespace std;
    int arr[] = { 5 ,9 , 9 ,   8 , 9 , 68  , 9, 2};
    int element ;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the element You want to search : ";
    cin>>element;
    cout<<"Array is : ";
    for ( int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    search(arr , size ,  element);
    return 0;
}
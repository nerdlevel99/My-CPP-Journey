#include <iostream>
int main()
{
    using namespace std;
    int arr[] = { 1 , 2, 3 , 4 , 5, };
    int  size = sizeof(arr[0]);

    cout<<"The value is " << size<<endl <<endl;
    cout<<"arr[0] is " << &arr[0] <<endl; 
    cout<<"arr + 0  is " << arr + size*0 <<endl; 

    cout<<endl;
    
    cout<<"arr[1] is " << &arr[1] <<endl; 
    cout<<"arr + 4  is " << arr + (size*1) <<endl; 

    cout<<endl;


    cout<<"arr[2] is " << &arr[2] <<endl; 
    cout<<"arr + 8  is " << arr + (size*2) <<endl; 

    cout<<endl;


    cout<<"arr[3] is  " << &arr[3] <<endl; 
    cout<<"arr + 12  is " << arr + (size*3) <<endl; 
    
    return 0;
}
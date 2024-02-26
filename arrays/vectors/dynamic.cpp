#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    vector <int> arr(n , - 1);
    for ( int i = 0; i < arr.size(); i++)
            cout<<arr[i]<<" ";
    
    return 0;
}
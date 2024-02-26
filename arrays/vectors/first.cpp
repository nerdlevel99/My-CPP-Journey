#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector <int> arr(0); // declaration 
    cout<<"The size before element is " <<arr.size() <<endl;
    cout<<"The capacity before element is " <<arr.capacity() <<endl;
    arr.push_back(10); //assigns elements to the last.
    cout<<"The size after element inserted is " <<arr.size() <<endl;
    cout<<"The capacity after element is " <<arr.capacity() <<endl;

    return 0;
}
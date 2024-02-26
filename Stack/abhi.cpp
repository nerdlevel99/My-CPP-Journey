#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>odd;
    odd.push(1);
    odd.push(3);
    odd.push(5);
    odd.push(7);
    stack<int>even;
    even.push(2);
    even.push(4);
    even.push(6);
    even.push(8);

    
    odd.swap(even);

    cout<<"Odd stack is : ";
    while (!odd.empty())
    {
        cout<<odd.top() <<"  ";
        odd.pop();
    }

    cout<<"\n\nEven stack is : ";
    while (!even.empty())
    {
        cout<<even.top() <<"  ";
        even.pop();
    }
    
    return 0;
}
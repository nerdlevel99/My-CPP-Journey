#include <iostream>

float area(float radius)
{
    float pi = 3.142857142857142858;
    return pi*radius*radius;
}
int main()
{
    using namespace std;
    float r;
    cout<<"Enter the radius  of the circle : ";
    cin>>r;
    cout<<"Area of circle is " << area(r)<<endl;

    return 0;
}
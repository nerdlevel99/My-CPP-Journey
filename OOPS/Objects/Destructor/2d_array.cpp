#include <iostream>
using namespace std;
int main()
{
    int** arr = new int*[10];

    for(int i=0 ;i<10; i++)
    {
       arr[i] = new int[5];
    }

    for(int i =0; i < 10; i++)
    {
        for(int j =0; j < 5 ; j++)
        {
            cout<<arr[i][j] <<" ";
        }

        cout<<endl;
    }
    delete[] arr;
    return 0;
}
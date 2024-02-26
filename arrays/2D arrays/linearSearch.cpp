#include <iostream>
using namespace std;


int search(int arr[][3] , int key ,int  row , int col)
{
    for ( int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key )
            {
                cout<<key << " is located at position arr["<<i<<"]["<<j <<"]" ;
                return 0;
            }
            
        }
        
    }

    
}
int main()
{
    int arr[3][3] = { { 1 , 2,3} , { 4 ,5, 6} , { 7 , 8 , 9}};
    int row = 3 , col = 3;
    int key;
    cout<<"Enter the no. You want to search : ";
    cin>>key;
    search(arr ,key , row , col);
    return 0;
}
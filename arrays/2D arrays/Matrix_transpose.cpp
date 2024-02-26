#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{1, 2}, {4, 5}, {7, 8}};
    int trans[10][10];
    int row = 3, col = 2;

    for (int i = 0; i < col; i++)
    {
        for (int  j = 0; j < row; j++)
        {
          trans[i][j] = arr[j][i];
        }
        cout<<endl;
        
    }
    
      for (int i = 0; i < col; i++)
    {
        for (int  j = 0; j < row; j++)
        {
        cout<<trans[i][j] <<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
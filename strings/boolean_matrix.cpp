#include <iostream>
#include <vector>

using namespace std;


void column(vector<vector<int>> &arr , int row  , int col)
{
    for(int i =0; i < arr.size(); i++)
    {
        arr[i][col] = 1;
    }
    
}

void rowno(vector<vector<int>> &arr , int row  , int col)
{
    for(int i =0; i <= arr[col].size(); i++)
    {
        arr[row][i] = 1;
    }
    
}


void operation(vector<vector<int>> &arr)
{

    vector<bool> flag;
    for(int i = 0; i<= arr.size(); i++)
    {
        for(int j = 0; j< arr[i].size(); j++ )
        {
            if(arr[i][j] == 1)
            {
                column(arr , i ,j);
                rowno(arr , i , j);
            }
        }
    }
}



int main()
{
    vector<vector<int>> arr
    {
        { 1 , 0, 0} , 
        { 0 , 0, 1} , 
        { 0 , 0, 0}
    };


    cout<<"Matrix before Operation is :" <<endl;
    for(auto it: arr)
    {
        for(auto col : it) 
        cout<<col << "  ";
        cout<<endl;
    }

    // operation(arr);

    cout<<"Matrix After Operation is : --------------------------" <<endl;

    for(auto it: arr)
    {
        for(auto col : it) 
        cout<<col << "  ";
        cout<<endl;
    }

    

    return 0;
}
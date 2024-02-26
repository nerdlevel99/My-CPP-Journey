#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> arr{{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first <<" " << arr[i].second << "   ";
    }

    vector<vector<int>> array(2, vector<int>(2)); // Initialize a 2x2 2D vector
    
    for(int i = 0; i<2; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
            array[i][j] = j+i+1;
        }
        
    }

    for(int i = 0; i < 2; i++)
        for(int j =0; j<2; j++)
            cout<<array[i][j] << endl;


    return 0;
}
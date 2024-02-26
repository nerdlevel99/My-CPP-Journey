#include <iostream>
int main()
{
    using namespace std;
    int i, j, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i ==n-1)
            cout<<"* ";
            else
            if(j==0||j==n-1)
            cout << "* ";

            else 
            cout <<"  ";
        }
        cout << endl;
    }

    return 0;
}
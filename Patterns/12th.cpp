#include <iostream>
int main()
{
    using namespace std;
    int i, j, n;
    cout << "Enter a number n : ";
    cin >> n;
    cout<<"*\n";
    for (i = 0; i < n; i++)
    {
        int k = 1;
        int cond = i <= n/2 ? 2 * i : 2*(n-i-1);
        for (j = 0; j <= cond; j++)
        {

            if (j==0)
            cout<<"*";
            
            if (j<=cond/2)
            {
              cout<<j+1;  
            }
            
            
            

            else{
                cout<<cond-j+1;
            }
            
          
            
            
        }

        cout<<"*";
        cout << endl;
    }
    cout<<"*";
    return 0;
}
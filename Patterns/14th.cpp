#include <iostream>
int main()
{
    using namespace std;
    int n , i, j;

    cout<<"Enter the number to get a butterfly : ";
    cin>>n;
    

    cout<<endl<<endl;
    for (i = 1; i < 2 * n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (i <= n)
            {
                if (j == i || j == 2 * n - i+1||j ==1 || j == 2*n)
                    cout << "*";

                else
                    cout << " ";
            }

            else
            {
                int k = (2*n)-i;
                if (j == k|| j== (2*n)-k+1 || j ==1|| j==2*n)
                    cout << "*";

                else
                    cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
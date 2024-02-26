#include <iostream>
using namespace std;

void print(int r, int c)
{

    if (r <= 0)
        return;

    if (c < r)
    {
        cout << "* ";
        print(r, c + 1);
    }

    else
    {
        cout << endl;
        print(r - 1, 0);
    }
}
int main()
{
    print(4, 0);
    return 0;
}
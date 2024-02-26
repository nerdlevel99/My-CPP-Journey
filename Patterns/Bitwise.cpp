#include <iostream>
int main()
{
    using namespace std;
    bool a = true;
    bool b = false;

    cout << " a & b is " <<(a & b) <<endl;
    cout << " a |  b is " <<(a | b)<<endl;
    cout << " a ~ b is " << (~a);
    cout << " a ^ b is " <<(a ^ b)<<endl;
    return 0;
}
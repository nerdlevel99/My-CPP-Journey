#include <iostream>
using namespace std;

bool find(string str, int s, int e)
{
    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

   return find(str, s + 1, e - 1);
}
int main()
{
    string str = "abhi";
    bool check = find(str, 0, str.length() - 1);
    cout << check << endl;
    check == 0 ? cout << "this string is not palindrome" : cout << "Given string is palindrome";

    return 0;
}
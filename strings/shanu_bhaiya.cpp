#include <iostream>
#include <algorithm>
using namespace std;

bool compare(char a, char b)
{
    return a < b;
}

int main()
{
    string s = "abhi sharma";
    sort(s.begin(), s.end(), compare);
    cout << s;
    return 0;
} 
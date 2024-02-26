#include <iostream>
#include <string>
using namespace std;

void get_permutations(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j <= str.size(); j++) // Changed the condition here
        {
            cout << str.substr(i, j - i) << endl; // Changed substr arguments
        }
    }
}

int main()
{
    string str = "abc";
    get_permutations(str);
    return 0;
}

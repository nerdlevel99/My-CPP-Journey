#include <iostream>
using namespace std;

void custom_sort(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i+1; j < s.length(); j++)
        {
            if(tolower(s[i]) > towlower(s[j])) swap(s[i] , s[j]);
        }
        
    }
    
}
int main()
{
    string s = "abhi sharma";
    custom_sort(s);
    cout<<s;
    return 0;
}
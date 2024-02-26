#include <iostream>
#include <string.h>

using namespace std;


int add(int a , int b)
{
    return a + b;
}

string add(string a, string b) {
    return a + b;
}

int add(int a , int b , int c)
{
    return a + b + c;
}

int main(int argc, char const *argv[])
{
   cout<< add(2 , 3) <<endl; // same function but different tasks
   string a = "hello" , b=" world"; 
    cout <<add(a , b) <<endl;
    cout<<add(1 , 2, 3)<<endl;
    return 0;
}

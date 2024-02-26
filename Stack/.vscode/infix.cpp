#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
#include <iomanip>
using namespace std;

int evaluate(int &a , int &b , char ch)
{
    switch (ch)
    {
    case '+': return a + b;
    case '-': return a-b;
    case '*': return a*b;
    case '/': return a/b;
    
    }

    return -1;
}
int main()
{
    cout<<endl<<setfill('*') << setw(20)<< "INFIX EVALUATION BY LORD ABHI " << endl;
    string s = "1+2/2 ";
    unordered_map<char , int>mp{{'-', 3}, 
               {'+', 3}, 
               {'*',2 },
               {'/',2 },
                {'^' , 1}
               };

    stack<char> op;
    stack<int> val;
  


    for(int i=0; i< s.length(); i++)
    {
        if(isdigit(s[i]))  val.push(s[i] -'0');

        else
        {
            if(op.empty()) op.push(s[i]);

            else if(mp[s[i]] >= mp[op.top()])
            {
                // evaluate 
                int a = val.top(); val.pop();
                int b = val.top();val.pop();
                char ch = op.top();op.pop();

                int ans =evaluate(b  , a , ch);
                val.push(ans);
                op.push(s[i]);
            } 

            else op.push(s[i]);
        }
    }

    while (val.size() !=1)
    {
         int a = val.top();val.pop();
                int b = val.top();val.pop();
                char ch = op.top();op.pop();

                int ans =evaluate(b  , a , ch);
                val.push(ans);


    }


    cout<<"Evalutating the expression ' " << s << " ' we got : " << val.top() <<endl;

   
    return 0;
}
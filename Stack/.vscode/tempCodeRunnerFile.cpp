 int a = val.top();val.pop();
                int b = val.top();val.pop();
                char ch = op.top();op.pop();

                int ans =evaluate(b  , a , ch);
                val.push(ans);

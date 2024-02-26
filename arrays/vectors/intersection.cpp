// Union of 2 arrays in cpp

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 6, 6, 7};
    vector<int> b{6, 7 , 7};

    vector<int> ans;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                b[j] = -1;
                ans.push_back(a[i]);
               
            }
        }
    }

    cout << "Intersection is : " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
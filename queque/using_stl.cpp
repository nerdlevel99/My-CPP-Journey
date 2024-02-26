#include <iostream>
#include <queue>
#include <deque>
using namespace std;
deque<int> q(5);

void display()
{
    for (int i : q)
    {
        cout << i << " ";
    }
    cout << endl;
}


int main()
{

    while (1)
    {
        int choice, num;

        cout << "1- Push front \n2-Push back\n3- Pop front\n4-Pop back ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number : ";
            cin >> num;
            q.push_front(num);
            display();
            break;

        case 2:
            cout << "Enter the number : ";
            cin >> num;
            q.push_back(num);
            display();
            break;

        case 3:
            q.pop_front();
            display();
            break;

        case 4:
            q.pop_back();
            display();
            break;

        default:
            break;
        }
    }

    return 0;
}
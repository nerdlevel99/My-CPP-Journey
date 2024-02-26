#include <iostream>
#include <vector>
using namespace std;
class cqueue
{
    int front, rear, size;
    int *arr;

public:
    cqueue(int n)
    {

        arr = new int[n];
        this->front = -1;
        this->rear = -1;
        this->size = n;
    }

    void push(int num)
    {

        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Queque Overflow :  can't insert more elements : " << endl;
            return;
        }

        if (front == -1)
            front = rear = 0;

        else
        {
            if (rear == size - 1)
                rear = 0;
            else
                rear++;
        }

        arr[rear] = num;
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "queue overflow " << endl;
            return;
        }

        int temp = arr[front];

        if (front == size - 1)
            front = 0;

        else if (front == rear)
            front = rear = -1;

        else
            front++;

        cout << "Successfully deleted : " << temp << endl;
    }

    void display()
    {
        cout << "Queue is : ";
        if (front == -1)
        {
            cout << "Queue underflow : or queque is empty " << endl;
            return;
        }
        if (rear > front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }

        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }

        cout << endl
             << " -----------------------------------" << endl;
    }

    int get_size()
    {
        int ans;
        if (front == -1)
        {
            cout << "Queque is empty " << endl;
            return -1;
        }
        if (front < rear)
        {
            return rear - front + 1;
        }

        else
        {
            ans = size - front;
            ans += rear;
        }
        return ans;
    }

    int top()
    {
        if (front == -1)
        {
            cout << "Queue is empty : hence no Top element is found " << endl;
        }
        return arr[front];
    }
};

int main()
{

    int choice, num;
    cqueue q(5);

    while (1)
    {
        cout << "1-Push\n2-Pop\n3-Display\n4-Get size \n5- Get top element \n6-Exit\nYour Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number you want to insert : ";
            cin >> num;
            q.push(num);
            break;

        case 2:
            q.pop();
            break;

        case 3:
            q.display();
            break;
        case 4:
            cout << "Size of Queque is : " << q.get_size() << endl;
            break;
        case 5:
            cout << "Top element of queue is : " << q.top() << endl;
            break;
        case 6:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
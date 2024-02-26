#include <iostream>
#include <vector>
using namespace std;
class deque
{
    int front, rear, size;
    int *arr;

public:
    deque(int n)
    {

        arr = new int[n];
        this->front = -1;
        this->rear = -1;
        this->size = n;
    }

    void push_back(int num)
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

    void push_front(int num)
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
            if (front == 0)
                front = size - 1;
            else
                front--;
        }

        arr[front] = num;
    }

    void pop_front()
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

    void pop_back()
    {

        cout << "Front -> " << front << " Rear ->  " << rear << endl;
        if (front == -1)
        {
            cout << "queue overflow " << endl;
            return;
        }

        int temp = arr[rear];

        if (rear == 0)
            rear = size - 1;

        else if (front == rear)
            front = rear = -1;

        else
            rear--;

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
    deque q(5);
    while (1)
    {
        int choice, num;

        cout << "1- Push front \n2-Push back\n3- Pop front\n4-Pop back\nYour Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number : ";
            cin >> num;
            q.push_front(num);
            q.display();
            break;

        case 2:
            cout << "Enter the number : ";
            cin >> num;
            q.push_back(num);
            q.display();
            break;

        case 3:
            q.pop_front();
            q.display();
            break;

        case 4:
            q.pop_back();
            q.display();
            break;

        default:
            break;
        }
    }

    return 0;
}
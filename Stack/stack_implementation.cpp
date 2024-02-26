#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int *arr;
    int size;

public:
    stack(int size)
    {
        int *arr = new int(size);
        this->size = size;
        top = -1;
    }

    void push(int num)
    {

        if (top < size)
        {
            // cout<<"Top = " <<top << "Size = " << size <<endl;
            top++;
            arr[top] = num;
        }

        else
        {
            cout << "\n------------------Stack overflow-----------------------\n " << endl;
            return;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "\n--------------------Stack underflow--------------------\n";
        }

        else
        {
            top--;
        }
    }

    int peek()
    {
        return arr[top];
    }

    bool isEmpty()
    {
        if (top != -1)
            return false;
        return true;
    }

    void print()
    {
        if (this->isEmpty())
        {
            cout << "stack is empty sir " << endl;
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    stack abhi(5);
    int choice, num;

    while (1)
    {
        cout << "\n-----------Your Menu : --------------------------\n1-Push\n2-Pop\n3-Peek\n4-Print\n5-IsEmpty \n6-Exit \n\tYour Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number : ", cin >> num;
            abhi.push(num);
            break;
        case 2:
            abhi.pop();
            break;
        case 3:
            cout << "top element is " << abhi.peek() << endl;
            break;
        case 4:
            abhi.print();
            break;
        case 5:
            abhi.isEmpty() ? cout << "Stack is Empty" << endl : cout << "Stack is not empty";
            break;
        case 6:
            exit(1);
        }
    }

    return 0;
}
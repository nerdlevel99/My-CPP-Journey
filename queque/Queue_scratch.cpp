#include <iostream>
#include <vector>
using namespace std;

class queque
{

    int front=-1 , rear = -1 , size =0;
    int *arr;
    public:
    queque(int n)
   {
        arr = new int[n];
        front = 0;
        rear = 0;
        size = n;
   }

   void push(int num)
   {
      if(rear <size)    arr[rear++] = num;

        else 
        {
            cout<<"Queue Overflow : " <<endl;
            return;
        }
   }

   int pop()
   {
        if(front == rear)
        {
            cout<<"Queue Underflow : " << endl;
            return -1;
        }
        int temp = arr[front];
        front++;

        if(front == rear) front =0 , rear =0;
        return temp;
   }

   bool is_empty()
   {
     return rear-front == 0;
   }

    int top()
    {
        if(front == rear) return -1;
        return arr[front];
    }
   int get_size()
   {
        return rear-front;
   }

   void print()
   {
        for(int i=front ; i< rear; i++)
        {
            cout<<arr[i] << "\t";
        }
   }

};
int main()
{
    int choice , num;
    queque q(5);
   
   while (true)
   {
        cout<<"--------------------Your Menu Good sir ------------------------------\n";
        cout<<"1- Push \n2- pop \n3- First element \n4- Get size \n 5- Print\tYour Choice :  ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout<<"Enter the number : "; cin>>num;
            q.push(num);
            break;
        case 2 : 
           cout<<"Succussefully deleted : " << q.pop() << endl;
            break;

        case 3: 
            cout<<"Element on top is : " << q.top() << endl;
            break;
        case 4: 
            cout << "Size of queque is " << q.get_size() << endl;
        
        case 5: q.is_empty()?cout<<"Queque is empty " << endl : cout << "Queue is Not empty"; break;
        case 6:
        cout<<endl << "Queque is : ";
        q.print();
        cout<<endl;
        break;

            default: cout<<"Please Enter valid parameters good sir : " <<endl;
            break;
        
        }
   }
   
    return 0;

}
   
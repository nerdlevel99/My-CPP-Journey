#include <iostream>
 
using namespace std;

class Node
{
    public : 
    int data ;
    Node* next ;

    Node(int num)
    {
        this ->data = num;
        this ->next = NULL;
    }
};

class queque
{
    int*arr;
    Node * front , *rear;
    int size;

    public:
    queque()
    {
        front = rear = NULL;
        size =0;
    }

    void push(int num)
    {
        size++;

        Node*temp = new Node(num);
        if(!front)
        {
          front = temp;
          rear = temp;
          return;
        }

        rear->next = temp;
        rear = rear->next;
    }

    void display()
    {

        cout<<"queue is : " ;
        for(Node* i = front ; i!=NULL; i = i->next)
        {
            cout<<i ->data << " ";
        }

        cout<<endl;
    }

    void top()
    {
        if(!front) {
            cout<<"Quque is empty sir" <<endl;
            return;
        }

        cout<<"Element at top is : " << front->data << endl;
    }

    void pop()
    {

        if(!front) 
        {
            cout<<"Queque is empty : " << endl;
            return;
        }

        cout<<"Successfully deleted : " << front ->data << endl;
        front = front ->next;

        size--;

    }

    void get_size()
    {
        cout <<"Size of queue is : " << size <<endl;
    }


};

int main()
{
     int choice , num;
    queque q;
   
   while (true)
   {
        cout<<"--------------------Your Menu Good sir ------------------------------\n";
        cout<<"1- Push \n2- pop \n3- First element \n4- Get size \n 5- Print\nYour Choice :  ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout<<"Enter the number : "; cin>>num;
            q.push(num);
            q.display();
            break;
        case 2 : 
            q.pop();
            q.display();
            break;

        case 4: q.get_size(); break;

        case 3 : q.top(); break;

        default:
        cout<<"Please Enter valid input sir " <<endl;
        
        
        }

   }
    return 0;
}
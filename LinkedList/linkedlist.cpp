#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *Start = NULL;

void display()
{
    struct node *p = Start;
    while (p != NULL)
    {
        cout << p->data;
        cout << "-->";
        p = p->next;
    }

    cout << "  NULL";
}

void insert_end(int n)
{
    if(Start == NULL)
    {
        cout<<"Please create a linkedlist first : using  option 1 : "<<endl;
        return;
    }
    struct node* p = Start;

    struct node*temp = new struct node;
   

    while(p->next!=NULL) 
    {
        p = p ->next;
    }

    temp->data = n;
    temp->next = NULL;

    p->next= temp;


}

void insert_beg(int n)
{
    struct node*temp , *p = Start;
   temp  = new struct node;

   temp ->data = n;
   temp->next = p;
   Start = temp;


}

void create(int n)
{
    Start = new struct node;
    struct node *p = Start, *temp;

    int item;
    if (n <= 0)
    {
        cout << "Invalid Option ! Kindly enter positive numbers only ";
        return;
    }

    cout << "Enter the data for  item 1 : ";
    cin >> item;
    p->data = item;

    for (int i = 2; i <= n; i++)
    {
        p->next = new struct node;
        cout << "Enter the data for item " << i << " :  ";
        cin >> item;
        p->next->data = item;
        
        p = p->next;
    }

    p->next = NULL;

    cout << "Successfully created linkedlist " <<endl;
}

int main()
{
    int choice, n;
    while (1)
    {
        cout << "\nPlease make a choice :\n1.Create a linked List \n2.Insertion at end \n3.Deletion\n4.Search\n5.Display\nYour choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of elements you want : ";
            cin >> n;
            create(n);
            break;
        case 2:
            cout << "Enter the number You want to insert : ";
            cin >> n;
            insert_end(n);
            break;
        case 3:
            cout<<"Enter the number You wanna insert : ";
            cin>>n;
            insert_beg(n);

        case 5:
            display();
        }
    }

    return 0;
}
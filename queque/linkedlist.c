#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data ;
    struct Node* next;
};
struct Node* head = NULL;



void create(int num)
{
    int item;
    head = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data for element 1 : ");
    scanf("%d" ,&item );

    head->data = item;
    head-> next = NULL;
    struct Node* p = head , *temp;

    for(int i = 1; i< num; i++)
    {
        printf("enter value for element %d : " , i+1);
        scanf("%d" , &item);
        temp = (struct Node* ) malloc(sizeof(struct Node));
        temp->data = item;
        p-> next = temp;
        p = p-> next;
    }

    p->next = NULL;

   
}
void display(struct Node* head)
{

    struct Node* p = head;
    if(p == NULL)
    {
        printf("The linked-list is empty sir : kindly add some pretty good numbers : ");
        return;
    }
    while (p!=NULL)
    {
       printf("%d -> " , p->data);
        p = p->next;
    }

    printf("NULL\n");

    
}

int main()
{
    int choice;
   

    while (1)
    {
         printf("Hey i am just a linkedlist menu : ");
    printf("\n1- Insert at beginning\n 2. Insert at end\n 3. display\nYour choice : ");
    scanf("%d" , &choice);

       switch (choice)
       {

        case 1: 
        create(5);
        break;
       case 3:
        display(head);
        break;
       
       default:
        break;
       }
    }
    

}
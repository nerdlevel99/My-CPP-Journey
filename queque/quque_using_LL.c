#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void push(int num)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp ->next = NULL;
    if (front == NULL)
    {
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = rear->next;
}

void display()
{
    struct node *i = front;
    printf("\n");
    
    while (i)
    {
        printf("%d ", i->data);
        i = i->next;
    }

    printf("\n");
}

void pop()
{
    if(!front) 
    {
        printf("Queque Underflow : \n");
        return;

    }

    struct node*temp = front;
    front = front->next;
    free(temp);


}
int main()
{
    int choice, num;

    while (1)
    {
        printf("--------------------Your Menu Good sir ------------------------------\n");
        printf("1- Push \n2- pop \n3- First element \n4- Get size \n 5- Print\nYour Choice :  ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the number : ");
            scanf("%d", &num);
            push(num);
            display();
            break;
            case 2 :
                pop();
                display();
                break;

            // case 4: get_size(); break;

            // case 3 : top(); break;

        default:
            printf("Please enter valid numbers sir : \n");
        }
    }
    return 0;
    return 0;
}
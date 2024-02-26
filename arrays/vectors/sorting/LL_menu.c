#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

void search()
{
    int target;
    printf("enter the element you want to search : ");
    scanf("%d", &target);
    struct node *p = start;

    int pos = 1;
    while (p->data != target)
    {
        pos++;

        p = p->next;

        if (p == NULL)
        {
            printf("Element is not present in the linked list \n");
            return;
        }
    }

    printf("Element found at position : %d ", pos);
}

void display()
{
    if (start == NULL)
    {
        printf("Please create a linkedList first \n");
        return;
    }
    struct node *p = start;
    while (p != NULL)
    {
        printf("%d --> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void create()
{

    start = (struct node *)malloc(sizeof(struct node));
    struct node *p = start;
    int item;
    int n;
    printf("Enter the size of the linked list : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        printf("Enter the data for %d element: ", i);
        scanf("%d", &item);
        p->data = item;
        if (i == n)
        {
            p->next = NULL;
            break;
        }

        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
    }
}

void add_beg()
{
    if (start == NULL)
    {
        printf("Please create a linkedList first \n");
        return;
    }
    int item;
    struct node *p, *temp;
    p = start;
    printf("Enter the element: ");
    scanf("%d", &item);

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = p;
    start = temp;
}

void add_pos()
{

    if (start == NULL)
    {
        printf("Please create a linkedList first \n");
        return;
    }

    int pos, item;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        add_beg();
        return;
    }

    printf("Enter the Item : ");
    scanf("%d", &item);

    struct node *temp, *p;
    p = start;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;

    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }

    temp->next = p->next;
    p->next = temp;
}
void add_after()
{
    if (start == NULL)
    {
        printf("Please create a linkedList first \n");
        return;
    }
    int pos, item;
    printf("Enter the position : ");
    scanf("%d", &pos);

    printf("Enter the Item : ");
    scanf("%d", &item);

    struct node *temp, *p;
    p = start;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;

    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }

    temp->next = p->next;
    p->next = temp;
}

void get_size()
{
    if (start == NULL)
    {
        printf("Please create a linkedList first \n");
        return;
    }

    struct node *p = start;
    int count = 0;

    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    printf("\nSize of linkedList is : %d ", count);
}

void add_end()
{
    if (start == NULL)
    {
        printf("Please create a linkedList first \n");
        return;
    }

    struct node *p = start, *temp;

    int item;
    printf("Enter the number : ");
    scanf("%d", &item);
    temp = (struct node *)malloc(sizeof(struct node));

    while (p->next != NULL)
    {
        p = p->next;
    }
    temp->data = item;

    p->next = temp;
    temp->next = NULL;
}

void reverse()
{
    struct node *p = start, *prev = NULL, *next = NULL;

    while (p != NULL)
    {
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }

    start = prev;
}

void del_pos()
{
    int pos;
    struct node *p = start, *old = start;
    if (start == NULL)
    {
        printf(" !!! Create linked list By choosing option 1 first  !!!\n");
        return;
    }

    printf("Enter the position you want to delete : ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        start = p->next;
        return;
    }

    p = p->next;
    for (int i = 2; i < pos; i++)
    {
        old = old->next;
        p = p->next;
    }

    old->next = p->next;
}

void del_val()
{
    int value;
    struct node *p = start, *old = NULL; // Initialize 'old' to NULL
    if (start == NULL)
    {
        printf(" !!! Create linked list by choosing option 1 first  !!!\n");
        return;
    }

    printf("Enter the value you want to delete: ");
    scanf("%d", &value);

    while (p != NULL && p->data != value)
    {
        old = p;
        p = p->next;
    }

    if (p == NULL)
    {
        printf("Element not found in the linked list\n");
        return;
    }

    if (old == NULL)
    {
        // The value to delete is in the first node
        start = p->next;
    }
    else
    {
        // The value to delete is in a non-first node
        old->next = p->next;
    }

    free(p); // Free memory for the deleted node
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n-----------------Menu---------------------\n");
        printf("1.Create a linked list \n2.Display\n3.Add at beginnnig\n4.Add at given position\n5.Add after position\n6.Insert at end\n7.Get size of linkedlist\n 8. Search in linkedlist\n 9.Reverse The linkedlist \n10.Delete from position \n11.Delete the value \n\tYour choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            add_beg();
            break;
        case 4:
            add_pos();
            break;
        case 5:
            add_after();
            break;

        case 6:
            add_end();
            break;

        case 7:
            get_size();

        case 8:
            search();
            break;
        case 9:
            reverse();
            break;

        case 10:
            del_pos();
            break;

        case 11:
            del_val();
            break;
        default:
            printf("Enter valid numbers only ");
        }
    }
    return 0;
}

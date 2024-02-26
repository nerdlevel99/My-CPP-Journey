#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL; // Use NULL instead of '\0' for a null pointer

void display()
{
    struct node *p = start;
    while (p != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void create(int data[], int n)
{
    start = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the first node

    if (start == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    struct node *p = start;
    p->data = data[0];

    for (int i = 1; i < n; i++)
    {
        p->next = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the next node

        if (p->next == NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        p = p->next;
        p->data = data[i];
    }

    p->next = NULL; // Set the last node's next pointer to NULL
}

int main()
{
    int data[] = {5, 10, 15, 20, 25};
    create(data, 5);
    display();

    return 0;
}

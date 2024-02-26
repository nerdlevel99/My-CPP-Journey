#include <stdio.h>
#define MAXSTK 10
int stack[MAXSTK], item, top = -1;
void push(int item)
{
    if (top == MAXSTK - 1)
    {
        printf("STACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        item = stack[top];
        top--;
    }
}

void peek()  
{
    printf("the top element is : %d\n" , stack[top]);
}
int main()
{
    int choice = -1;
    while (1)
    {
        printf("\n----HERE IS YOUR MENU----");
        printf("\n1.PUSH : ");
        printf("\n2.POP : ");
        printf("\n3.DISPLAY THE STACK : ");
        printf("\n3.Take a peek : ");
        printf("\n4.EXIT : ");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5)
        {
            printf(" PLEASE ENTER THE VALID MENU i.e FROM 1 TO 4\n");
        }
        else
        {
            switch (choice)
            {
            case 1:
                printf("Enter the item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("THE STACK ELEMENTS ARE : ");
                int i;
                for (i = 0; i <= top; i++)
                {
                    printf("%d\t", stack[i]);
                }
                break;
            case 4:
              peek();
            }
        }
    }
}
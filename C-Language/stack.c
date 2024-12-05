#include <stdio.h>
int top = -1;
int n = 100;
int stack[100];

int main()
{
    // int maxsize;
    // printf("Enter Your  Maximum Size of Stack :\n");
    // scanf("%d", &maxsize);
    // int stack[maxsize];
    // printf(" Your  Maximum Size of Stack is :", maxsize);

    int choice;
    int value;
    printf(" 1. Push In Stack : \n");
    printf(" 2. Pop from Stack : \n");
    printf(" 3. Display  Stack : \n");
    printf(" 4. Exit From Stack \n");
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter Your Number For Push in the Stack : ");
            scanf("%d", &value);
            push(value);
            break;
        }
        case 2:
        {
            printf("Enter Your Number For Pop From the Stack :");
            scanf("%d", &value);
            pop(value);
            break;
        }
        case 3:
        {
            displayStack();
            break;
        }
        case 4:
        {
            printf("You are the out of stack Or Exit");
            break;
        }
        default:
        {
            printf("You have Entered wrong Choice");
            break;
        }
        }
    }
}

void push(int value)
{

    if (top >= n - 1)
    {
        printf("Stack is overFlow : \n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Stack is UnderFlow \n");
    }
    else
    {
        printf("The Poped Element is : ", stack[top]);
        top--;
    }
}
void displayStack()
{
    if (top >= 0)
    {
        printf("Stack Elements are : \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Stack is Empty");
    }
}

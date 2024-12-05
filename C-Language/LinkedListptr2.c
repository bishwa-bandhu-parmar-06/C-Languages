// Insert a Node at the End of the Linked List.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void insertData(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->next = NULL;
    temp->data = data;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    struct Node *run = head;

    while (run->next != NULL)
    {
        run = run->next;
    }
    run->next = temp;

    // run = temp;
};

void printLinkedList()
{
    struct Node *run = head;

    while (run != NULL)
    {
        printf("%d  ", run->data);
        run = run->next;
    };
    printf("\n");
};

int main()
{
    head = NULL;
    insertData(10);
    insertData(20);
    insertData(30);
    insertData(40);
    printLinkedList();
    return 0;
}
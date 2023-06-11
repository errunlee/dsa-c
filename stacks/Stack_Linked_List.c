#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// isempty
int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    { // couldnot allocate memory
        return 1;
    }
    return 0;
}
void print(struct Node *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Empty\n");
    }
    while (ptr != NULL)
    {
        printf("elem: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Push into stack
struct Node *push(struct Node *head, int val)
{
    if (isFull())
    {
        printf("stack overflow");
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = head;
        return newNode;
    }
}

// Pop from stack

struct Node* pop(struct Node *top,int* popped)
{
    if (isEmpty(top))
    {
        printf("empty\n");
    }
    else
    {
        struct Node *temp = top;
        top = temp->next;
        *popped=temp->data;
        free(temp);
        return top;
    }
}
int main()
{
    int poppedElem;
    struct Node *head = NULL;
    head=push(head, 1000);
    head=push(head, 100);
    head=push(head, 10);
    head = pop(head,&poppedElem);
    printf("popped Elem:%d\n",poppedElem);
    print(head);

}
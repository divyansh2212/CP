#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insertAtHead(struct node **head, int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->next = *head;
    *head = n;
}
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head = NULL;
    int option;
    int val;
    while (1)
    {
        printf("\n\t----Menu----\n");
        printf("\t1. Insert\n\t2. Display\n\t3. Exit\n");
        printf("Enter the option number:\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value you want to insert at the beginning of the linked list:\n");
            scanf("%d", &val);
            insertAtHead(&head, val);
            break;
        case 2:
            display(head);
            break;
        default:
            goto end;
            break;
        }
    }
end:
    return 0;
}
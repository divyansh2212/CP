#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void deleteNode(struct node **head, int key)
{
    struct node *temp = *head, *prev;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}
void insertAtHead(struct node **head, int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->next = *head;
    *head = n;
}
int main()
{
    struct node *head = NULL;
    insertAtHead(&head, 5);
    insertAtHead(&head, 4);
    insertAtHead(&head, 3);
    insertAtHead(&head, 2);
    insertAtHead(&head, 1);

    deleteNode(&head, 1); // Deleting the element '1'
    return 0;
}
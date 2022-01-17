#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
        return;
    if (head->data == val)
    {
        node *todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            node *todelete = temp->next;
            temp->next = temp->next->next;
            delete todelete;
            return;
        }
        temp = temp->next;
    }

    cout << "Element not found for deletion!\n";
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    node *newhead = reverse(head);
    display(newhead);

    node *newRecursiveHead = reverse(newhead);
    display(newRecursiveHead);
    return 0;
}
// Doubly Linked-List
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val, next = NULL, prev = NULL;
    }
};

void deletion(node *&head, int val)
{
    node *temp = head;
    if (temp->data == val)
    {
        node *todelete = temp;

        if (head->next != NULL)
        {
            temp = temp->next;
            temp->prev = NULL;
            head = temp;
        }
        else
            head = NULL;
            
        delete todelete;
        return;
    }

    while (temp->data != val)
        temp = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    temp->prev->next = temp->next;

    delete temp;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 0);
    display(head);
    deletion(head, 0);
    deletion(head, 2);
    display(head);
    return 0;
}
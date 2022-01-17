#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val, next = NULL;
    }
};

int length(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

node *appendLastK(node *&head, int k)
{
    int n = length(head);
    if (n == k)
        return head;
    node *newHead;
    node *newTail;
    int count = 1;
    node *temp = head;

    while (temp->next != NULL)
    {
        if (count == n - k)
            newTail = temp;

        if (count == n - k + 1)
            newHead = temp;

        temp = temp->next;
        count++;
    }
    temp->next = head;
    newTail->next = NULL;
    return newHead;
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
    cout << "NULL\n";
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    node *newHead = appendLastK(head, 6);
    display(newHead);
    return 0;
}
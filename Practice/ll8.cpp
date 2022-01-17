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

node *mergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummynode->next;
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
    int arr1[] = {8, 6, 5, 4, 2};
    int arr2[] = {9, 7, 3, 1};
    node *head1 = NULL;
    node *head2 = NULL;
    for (int i = 0; i < 5; i++)
        insertAtHead(head1, arr1[i]);

    for (int i = 0; i < 4; i++)
        insertAtHead(head2, arr2[i]);

    node *newhead;
    // newhead = merge(head1, head2);
    newhead = mergeRecursive(head1, head2);
    display(newhead);

    return 0;
}
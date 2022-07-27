// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return NULL;

        // adding nodes in a linked list
        Node *temp = head;
        while (temp)
        {
            Node *node = new Node(temp->val);
            node->next = temp->next;
            temp->next = node;
            temp = temp->next->next;
        }

        // assigning random pointers
        temp = head;
        while (temp)
        {
            if (temp->random)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }


        // extracting the both lists
        temp = head;
        Node *dummynode = new Node(mod);
        Node *dummytemp = dummynode;
        while (temp)
        {
            dummytemp->next = temp->next;
            temp->next = temp->next->next;
            dummytemp = dummytemp->next;
            temp = temp->next;
        }

        return dummynode->next;
    }
};
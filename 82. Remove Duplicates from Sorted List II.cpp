// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;

        ListNode *newHead = new ListNode(mod);
        newHead->next = head;
        ListNode *temp = newHead;

        while (temp->next != NULL)
        {
            if (temp->next->next != NULL && temp->next->next->val == temp->next->val)
            {
                ListNode *c = temp->next;
                while (c != NULL && c->val == temp->next->val)
                    c = c->next;

                temp->next = c;
            }
            else
                temp = temp->next;
        }
        return newHead->next;
    }
};
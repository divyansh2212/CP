// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    int l(ListNode *head)
    {
        ListNode *temp = head;
        int len = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        return len;
    }

    ListNode *rotateRight(ListNode *head, int k)
    {
        if (k == 0 || head == NULL)
            return head;

        k = k % l(head);
        int to_rotate = l(head) - k - 1;

        ListNode *temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = head;

        temp = head;
        while (to_rotate--)
            temp = temp->next;

        ListNode *newHead = temp->next;
        temp->next = NULL;

        return newHead;
    }
};
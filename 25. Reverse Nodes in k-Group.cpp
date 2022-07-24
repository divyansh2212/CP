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
    int l(ListNode *head)
    {
        ListNode *temp = head;
        int len = 0;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int len = l(head);
        if (head == NULL || len < k)
            return head;

        int cnt = 0;
        ListNode *prevptr = NULL, *currptr = head, *nextptr;

        while (currptr != NULL && cnt < k)
        {
            cnt++;
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }

        head->next = reverseKGroup(nextptr, k);

        return prevptr;
    }
};
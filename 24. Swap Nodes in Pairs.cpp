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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL)
            return head;

        ListNode *prev = NULL, *curr = head, *next;

        int cnt = 0;
        while (curr != NULL && cnt < 2)
        {
            cnt++;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = swapPairs(next);

        return prev;
    }
};
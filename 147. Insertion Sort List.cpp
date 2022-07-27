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
    ListNode *insertionSortList(ListNode *head)
    {
        if (head->next == NULL)
            return head;

        ListNode *dummy = new ListNode(mod);

        while (head)
        {
            ListNode *next = head->next;
            ListNode *temp = dummy;

            while (temp->next && temp->next->val < head->val)
                temp = temp->next;

            head->next = temp->next;
            temp->next = head;
            head = next;
        }
        return dummy->next;
    }
};
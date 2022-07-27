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
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *prevptr = NULL, *currptr = head, *nextptr;

        while (currptr)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr;
    }

public:
    void reorderList(ListNode *head)
    {
        if (head->next == NULL)
            return;

        ListNode *slow = head, *fast = head->next;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *reversetemp = reverse(slow->next);
        slow->next = NULL;

        ListNode *dummy = new ListNode(mod);
        ListNode *dummytemp = dummy;
        bool flag = true; 

        while (head && reversetemp)
        {
            if (flag)
                dummytemp->next = head, head = head->next;
            else
                dummytemp->next = reversetemp, reversetemp = reversetemp->next;
            flag = !flag;
            dummytemp = dummytemp->next;
        }

        if (head)
            dummytemp->next = head;
        if (reversetemp)
            dummytemp->next = reversetemp;

        head = dummy->next;
    }
};
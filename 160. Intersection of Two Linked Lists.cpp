// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int len(ListNode *head)
    {
        int l = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            l++;
            temp = temp->next;
        }
        return l;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL || headB == NULL)
            return NULL;

        int lenA = len(headA), lenB = len(headB);

        if (lenA > lenB)
        {
            ListNode *temp = headA;
            while (lenA != lenB)
            {
                temp = temp->next;
                lenA--;
            }
            headA = temp;
        }
        else
        {
            ListNode *temp = headB;
            while (lenA != lenB)
            {
                temp = temp->next;
                lenB--;
            }
            headB = temp;
        }

        ListNode *tempA = headA, *tempB = headB;

        while (tempA != NULL)
        {
            if (tempA == tempB)
                return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};
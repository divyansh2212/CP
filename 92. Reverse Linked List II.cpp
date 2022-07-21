// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *prevptr = NULL;
        ListNode *currptr = head;
        ListNode *nextptr;

        while (currptr != NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr;
    }
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        int len = 0;

        ListNode *dummynode = new ListNode(1000);
        ListNode *dummytemp = dummynode;

        ListNode *temp = head;

        while (temp != NULL)
        {
            len++;
            if (len >= left && right >= len)
            {
                int data = temp->val;
                dummytemp->next = new ListNode(data);
                dummytemp = dummytemp->next;
            }
            temp = temp->next;
        }

        ListNode *reversedlist = reverse(dummynode->next);
        // temp = reversedlist;

        // while (temp != NULL)
        // {
        //     if (temp->next->next == NULL)
        //     {
        //         temp->next = NULL;
        //         break;
        //     }
        //     temp = temp->next;
        // }

        ListNode *finalList = new ListNode(-1000);
        ListNode *temp1 = head;
        ListNode *temp2 = reversedlist;
        ListNode *maintemp = finalList;

        len = 0;
        int data;
        while (temp1 != NULL)
        {
            len++;
            if (len >= left && right >= len)
            {
                data = temp2->val;
                maintemp->next = new ListNode(data);
                temp2 = temp2->next;
            }
            else
            {
                data = temp1->val;
                maintemp->next = new ListNode(data);
            }
            temp1 = temp1->next;
            maintemp = maintemp->next;
        }

        return finalList->next;
    }
};
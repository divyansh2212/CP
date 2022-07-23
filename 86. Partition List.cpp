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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *dummysmall = new ListNode(0), *dummylarge = new ListNode(0);
        ListNode *tempsmall = dummysmall, *templarge = dummylarge;

        ListNode *temp = head;

        while (temp != NULL)
        {
            if (temp->val < x)
            {
                tempsmall->next = temp;
                tempsmall = tempsmall->next;
            }
            else
            {
                templarge->next = temp;
                templarge = templarge->next;
            }
            temp = temp->next;
        }

        if (templarge->next != NULL)
            templarge->next = NULL;
        dummylarge = dummylarge->next;
        tempsmall->next = dummylarge;
        return dummysmall->next;
    }
};
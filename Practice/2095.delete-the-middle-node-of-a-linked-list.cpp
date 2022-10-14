/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
 */

// @lc code=start
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
    int length(ListNode *head)
    {
        int len = 0;
        ListNode *temp = head;
        while (temp)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }

public:
    ListNode *deleteMiddle(ListNode *head)
    {
        int len = length(head);
        if (len == 1)
        {
            head = NULL;
            return head;
        }
        if (len == 2)
        {
            head->next = NULL;
            return head;
        }

        int point = (len / 2) - 1;
        len = 0;
        ListNode *temp = head;

        while (temp)
        {
            if (len == point)
            {
                temp->next = temp->next->next;
                break;
            }
            len++;
            temp = temp->next;
        }

        return head;
    }
};
// @lc code=end

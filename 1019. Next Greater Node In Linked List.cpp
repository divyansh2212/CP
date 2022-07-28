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

    int length(ListNode *head)
    {
        int l = 0;
        ListNode *temp = head;
        while (temp)
            l++, temp = temp->next;
        return l;
    }

public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        if (head->next == NULL)
            return {0};

        int len = length(head);
        vector<int> ans(len, 0);

        ListNode *reversedList = reverse(head);

        stack<int> st;

        ListNode *temp = reversedList;
        int idx = len - 1;

        while (temp)
        {
            while (!st.empty())
            {
                if (st.top() > temp->val)
                {
                    ans[idx] = st.top();
                    break;
                }
                else
                    st.pop();
            }

            st.push(temp->val);
            temp = temp->next, idx--;
        }

        return ans;
    }
};
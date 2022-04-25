// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool f(ListNode *head, TreeNode *root)
    {
        if (head == NULL)
            return true;
        if (root == NULL)
            return false;
        if (root->val != head->val)
            return false;

        return f(head->next, root->left) | f(head->next, root->right);
    }

    bool traversal(ListNode *head, TreeNode *root)
    {
        if (root == NULL)
            return false;

        if (root->val == head->val)
            return f(head->next, root->left) | f(head->next, root->right) | traversal(head, root->right) | traversal(head, root->left);
        else
            return traversal(head, root->right) | traversal(head, root->left);
    }

    bool isSubPath(ListNode *head, TreeNode *root)
    {
        if (head == NULL)
            return true;

        return traversal(head, root);
    }
};
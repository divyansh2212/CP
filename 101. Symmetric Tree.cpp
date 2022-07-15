// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
    bool check(TreeNode *p, TreeNode *q)
    {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL || q == NULL || p->val != q->val)
            return false;

        return check(p->left, q->right) & check(p->right, q->left);
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        return check(root->left, root->right);
    }
};
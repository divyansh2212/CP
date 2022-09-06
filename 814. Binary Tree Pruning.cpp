// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

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

    bool regenerate(TreeNode *root)
    {
        if (root == NULL)
            return false;

        bool leftTree = regenerate(root->left);
        if (leftTree == false)
            root->left = NULL;

        bool rightTree = regenerate(root->right);
        if (rightTree == false)
            root->right = NULL;

        return (root->val | leftTree | rightTree);
    }

public:
    TreeNode *pruneTree(TreeNode *root)
    {
        bool flag = regenerate(root);
        if (!flag)
            return NULL;
        return root;
    }
};
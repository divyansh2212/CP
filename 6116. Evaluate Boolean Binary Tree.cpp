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
public:
    int traversal(TreeNode *root)
    {
        if (root->left == NULL && root->right == NULL)
            return root->val;

        int left = traversal(root->left);
        int right = traversal(root->right);

        if (root->val == 2)
            return (left | right);

        else
            return (left & right);
    }

    bool evaluateTree(TreeNode *root)
    {
        int ans = traversal(root);
        return ans;
    }
};
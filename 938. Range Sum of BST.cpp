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
    void traversal(TreeNode *root, int &low, int &high, int &ans)
    {
        if (root == NULL)
            return;
        if (root->val >= low && root->val <= high)
            ans += root->val;
        if (root->val >= high)
            traversal(root->left, low, high, ans);
        else if (root->val <= low)
            traversal(root->right, low, high, ans);
        else
        {
            traversal(root->left, low, high, ans);
            traversal(root->right, low, high, ans);
        }
    }

public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int ans = 0;
        traversal(root, low, high, ans);
        return ans;
    }
};
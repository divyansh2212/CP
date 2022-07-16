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
    void traversal(TreeNode *root, int &ans, TreeNode *&prev)
    {
        if (root->left)
            traversal(root->left, ans, prev);
        if (prev)
            ans = min(ans, abs(prev->val - root->val));
        prev = root;
        if (root->right)
            traversal(root->right, ans, prev);
    }

public:
    int getMinimumDifference(TreeNode *root)
    {
        int ans = 1e9;
        TreeNode *prev = NULL;
        traversal(root, ans, prev);
        return ans;
    }
};
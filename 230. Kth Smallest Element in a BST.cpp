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
    void inOrder(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> vec;
        inOrder(root, vec);
        return vec[k - 1];
    }
};
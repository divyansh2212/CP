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
    int levels(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        if (root == NULL)
            return {};

        queue<TreeNode *> q;
        vector<vector<int>> ans(levels(root));
        q.push(root);

        int k = ans.size() - 1;
        while (!q.empty())
        {
            vector<int> curr;
            int sz = q.size();
            for (int i = 0; i < sz; i++)
            {
                auto top = q.front();
                q.pop();
                curr.push_back(top->val);
                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
            }
            ans[k] = curr;
            k--;
        }
        return ans;
    }
};
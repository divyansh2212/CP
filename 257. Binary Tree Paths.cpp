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
    void helper(TreeNode *root, vector<string> &ans, string &curr)
    {
        if (root->left == NULL && root->right == NULL)
        {
            string origi = curr;
            curr += to_string(root->val);
            ans.push_back(curr);
            curr = origi;
            return;
        }

        string origi = curr;
        curr += to_string(root->val) + "->";
        if (root->left)
            helper(root->left, ans, curr);
        if (root->right)
            helper(root->right, ans, curr);
        curr = origi;

        return;
    }

public:
    vector<string> binaryTreePaths(TreeNode *root)
    {
        string curr = "";
        vector<string> ans;
        helper(root, ans, curr);
        return ans;
    }
};
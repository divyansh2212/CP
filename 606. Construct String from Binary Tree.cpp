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
    void generate(TreeNode *root, string &s)
    {
        if (root == NULL)
            return;

        s += to_string(root->val);

        if (root->left || root->right)
        {
            s += "(";
            generate(root->left, s);
            s += ")";

            if (root->right)
            {
                s += "(";
                generate(root->right, s);
                s += ")";
            }
        }
    }

public:
    string tree2str(TreeNode *root)
    {
        string s = "";
        generate(root, s);
        return s;
    }
};
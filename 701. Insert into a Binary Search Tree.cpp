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
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        TreeNode *node = new TreeNode(val);
        if (root == NULL)
            return node;

        TreeNode *dummy = root;

        while (root)
        {
            if (val > root->val)
            {
                if (root->right != NULL)
                    root = root->right;
                else
                {
                    root->right = node;
                    break;
                }
            }
            else
            {
                if (root->left != NULL)
                    root = root->left;
                else
                {
                    root->left = node;
                    break;
                }
            }
        }

        return dummy;
    }
};
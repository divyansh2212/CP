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
    int depth(TreeNode *root, int &diameter)
    {
        if (root == NULL)
            return 0;
        int l = depth(root->left, diameter), r = depth(root->right, diameter);
        diameter = max(diameter, l + r);

        return 1 + max(l, r);
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int dia = 0;
        depth(root, dia);
        return dia;
    }
};
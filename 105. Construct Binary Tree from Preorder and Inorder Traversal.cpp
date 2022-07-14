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
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, map<int, int> &inMap, int inStart, int inEnd, int preStart, int preEnd)
    {
        if (inStart > inEnd || preStart > preEnd)
            return NULL;

        TreeNode *root = new TreeNode(preorder[preStart]);
        int idx = inMap[preorder[preStart]];
        int freq = idx - inStart;

        root->left = build(preorder, inorder, inMap, inStart, idx - 1, preStart + 1, preStart + freq);

        root->right = build(preorder, inorder, inMap, idx + 1, inEnd, preStart + freq + 1, preEnd);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int n = preorder.size();
        map<int, int> inMap;
        for (int i = 0; i < n; i++)
            inMap[inorder[i]] = i;

        return build(preorder, inorder, inMap, 0, n - 1, 0, n - 1);
    }
};
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
    int sumPath(TreeNode *root, int &ans)
    {
        if (root == NULL)
            return 0;

        int leftSum = sumPath(root->left, ans), rightSum = sumPath(root->right, ans);

        ans += abs(leftSum - rightSum);

        return root->val + leftSum + rightSum;
    }

public:
    int findTilt(TreeNode *root)
    {
        int ans = 0;
        sumPath(root, ans);
        return ans;
    }
};
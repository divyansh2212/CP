// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return root;

        if (root->val == val)
            return root;

        TreeNode *ans1 = searchBST(root->left, val);
        TreeNode *ans2 = searchBST(root->right, val);

        if (ans1 != NULL)
            return ans1;

        else
            return ans2;
    }
};
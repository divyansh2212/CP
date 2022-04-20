// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> vec;
    void preOrder(TreeNode *root)
    {
        if (root == NULL)
            return;
        vec.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        preOrder(root);
        sort(vec.begin(), vec.end());
        return vec[k - 1];
    }
};
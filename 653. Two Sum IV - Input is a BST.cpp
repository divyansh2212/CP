// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

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
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> arr;
        inOrder(root, arr);

        int i = 0, j = arr.size() - 1;
        while (i < j)
        {
            if (arr[i] + arr[j] == k)
                return true;
            if (arr[i] + arr[j] > k)
                j--;
            else
                i++;
        }
        return false;
    }
};
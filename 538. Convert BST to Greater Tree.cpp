// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> eleVec;

    int bs(int &reqd)
    {
        int lo = 0, hi = eleVec.size() - 1, mid;

        while (lo <= hi)
        {
            mid = hi + ((lo - hi) / 2);
            if (eleVec[mid] < reqd)
                lo = mid + 1;
            else if (eleVec[mid] > reqd)
                hi = mid - 1;
            else
                return mid;
        }
        if (eleVec[hi] == reqd)
            return hi;
        return lo;
    }

    void preOrder(TreeNode *root)
    {
        if (root == NULL)
            return;
        eleVec.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }

    void traversal(TreeNode *root)
    {
        if (root == NULL)
            return;

        int reqd = root->val;
        int idx = bs(reqd);

        root->val = accumulate(eleVec.begin() + idx, eleVec.end(), 0);

        traversal(root->left);
        traversal(root->right);
    }

    TreeNode *convertBST(TreeNode *root)
    {
        preOrder(root);
        sort(eleVec.begin(), eleVec.end());

        traversal(root);

        return root;
    }
};
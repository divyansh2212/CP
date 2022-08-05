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
    TreeNode *construct(vector<int> &arr, int lo, int hi)
    {
        if (lo > hi)
            return NULL;
        int mid = (lo + hi) / 2;
        TreeNode *root = new TreeNode(arr[mid]);
        root->left = construct(arr, lo, mid - 1);
        root->right = construct(arr, mid + 1, hi);

        return root;
    }
public:
    TreeNode *balanceBST(TreeNode *root)
    {
        vector<int> arr;

        TreeNode *curr = root;
        stack<TreeNode *> st;

        while (1)
        {
            if (curr)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                if (st.empty())
                    break;
                auto top = st.top();
                st.pop();
                arr.push_back(top->val);
                curr = top->right;
            }
        }

        return construct(arr, 0, arr.size() - 1);
    }
};
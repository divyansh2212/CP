// <--------------------Jai Shree Babosa-------------------->

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
    void preOrder(TreeNode *root, vector<int> &nodes)
    {
        if (root == NULL)
            return;
        preOrder(root->left, nodes);
        nodes.push_back(root->val);
        preOrder(root->right, nodes);
    }

public:
    vector<vector<int>> closestNodes(TreeNode *root, vector<int> &queries)
    {
        vector<vector<int>> ans;
        vector<int> nodes;
        preOrder(root, nodes);
        // sort(nodes.begin(), nodes.end());
        int n = nodes.size();

        for (int i = 0; i < queries.size(); i++)
        {
            int query = queries[i];
            vector<int> curr(2, -1);
            int idx = lower_bound(nodes.begin(), nodes.end(), query) - nodes.begin();
            if (idx < n && nodes[idx] == query)
                curr[0] = query, curr[1] = query;
            else if (idx == n)
                curr[0] = nodes[n - 1], curr[1] = -1;
            else
            {
                curr[1] = nodes[idx];
                if (idx - 1 >= 0)
                    curr[0] = nodes[idx - 1];
                else
                    curr[0] = -1;
            }

            ans.push_back(curr);
        }
        return ans;
    }
};
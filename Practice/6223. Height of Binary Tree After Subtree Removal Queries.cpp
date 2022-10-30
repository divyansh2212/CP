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
    unordered_map<int, int> heightNode;
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = maxDepth(root->left), r = maxDepth(root->right);
        heightNode[root->val] = max(l, r);
        return 1 + max(l, r);
    }

public:
    vector<int> treeQueries(TreeNode *root, vector<int> &queries)
    {
        int maxmHeight = maxDepth(root) - 1, cnt = 0;
        vector<int> ans;

        queue<TreeNode *> q;
        q.push(root);
        vector<int> levels[maxmHeight + 1];
        unordered_map<int, int> node_level;

        while (!q.empty())
        {
            int sz = q.size();
            for (int i = 0; i < sz; i++)
            {
                auto front = q.front();
                q.pop();
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
                levels[cnt].push_back(front->val);
                node_level[front->val] = cnt;
            }
            cnt++;
        }

        for (int i = 0; i < queries.size(); i++)
        {
            int node = queries[i];
            int curr_level = node_level[node];
            int to_add = curr_level;

            if (levels[curr_level].size() == 1)
            {
                ans.push_back(node_level[node] - 1);
                continue;
            }

            for (auto &it : levels[curr_level])
            {
                if (it == node)
                    continue;
                to_add = max(to_add, heightNode[it] + to_add - 1);
            }
            ans.push_back(to_add);
        }

        return ans;
    }
};
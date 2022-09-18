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
public:
    TreeNode *reverseOddLevels(TreeNode *root)
    {
        vector<vector<int>> treeNodes;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            vector<int> currLevel;
            int sz = q.size();

            for (int i = 0; i < sz; i++)
            {
                auto front = q.front();
                q.pop();
                currLevel.push_back(front->val);
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }

            if (treeNodes.size() % 2)
                reverse(currLevel.begin(), currLevel.end());

            treeNodes.push_back(currLevel);
        }

        q.push(root);

        int level = 0;
        while (!q.empty())
        {
            int sz = q.size();

            for (int i = 0; i < sz; i++)
            {
                auto front = q.front();
                q.pop();
                front->val = treeNodes[level][i];
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }
            level++;
        }
        return root;
    }
};
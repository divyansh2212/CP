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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        bool flag = false;

        while (!q.empty())
        {
            int sz = q.size(), i = 0, idx;
            vector<int> temp(sz);
            while (i < sz)
            {
                auto front = q.front();
                q.pop();

                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);

                if (flag)
                    temp[i] = front->val;
                else
                    temp[sz - 1 - i] = front->val;
                i++;
            }
            flag = !flag;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
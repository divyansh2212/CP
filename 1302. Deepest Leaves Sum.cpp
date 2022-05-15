// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int deepestLeavesSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int ans = 0;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int sz = q.size();
            ans = 0;
            for (int i = 0; i < sz; i++)
            {
                auto top = q.front();
                q.pop();
                ans += top->val;
                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
            }
        }

        return ans;
    }
};
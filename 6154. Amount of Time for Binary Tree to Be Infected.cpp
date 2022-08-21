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
public:
    int amountOfTime(TreeNode *root, int start)
    {
        unordered_map<TreeNode *, TreeNode *> parent;
        TreeNode *startptr = NULL;
        queue<TreeNode *> q;
        q.push(root);

        // Assigning parent pointers
        while (!q.empty())
        {
            auto front = q.front();
            q.pop();
            if (front->val == start)
                startptr = front;
            if (front->left)
            {
                parent[front->left] = front;
                q.push(front->left);
            }
            if (front->right)
            {
                parent[front->right] = front;
                q.push(front->right);
            }
        }

        unordered_map<TreeNode *, int> visited;
        q.push(startptr);
        int time = 0;

        while (!q.empty())
        {
            int sz = q.size();
            time++;
            for (int i = 0; i < sz; i++)
            {
                auto front = q.front();
                q.pop();
                visited[front] = 1;

                if (front->left && visited[front->left] == 0)
                    q.push(front->left);
                if (front->right && visited[front->right] == 0)
                    q.push(front->right);
                if (front != root && visited[parent[front]] == 0)
                    q.push(parent[front]);
            }
        }

        return time - 1;
    }
};
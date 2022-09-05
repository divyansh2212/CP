// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int sz = q.size();
            vector<int> curr;

            for (int i = 0; i < sz; i++)
            {
                auto top = q.front();
                q.pop();
                curr.push_back(top->val);

                for (auto &child : top->children)
                    q.push(child);
            }
            ans.push_back(curr);
        }

        return ans;
    }
};
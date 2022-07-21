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
    // void inOrder(TreeNode *root, vector<int> &ans)
    // {
    //     if (root == NULL)
    //         return;
    //     inOrder(root->left, ans);
    //     ans.push_back(root->val);
    //     inOrder(root->right, ans);
    // }

public:
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> ans;
        // inOrder(root1, ans);
        // inOrder(root2, ans);
        // sort(ans.begin(), ans.end());

        stack<TreeNode *> st1, st2;

        while (root1 || root2 || st1.size() || st2.size())
        {
            while (root1)
            {
                st1.push(root1);
                root1 = root1->left;
            }
            while (root2)
            {
                st2.push(root2);
                root2 = root2->left;
            }

            if (st1.empty())
            {
                ans.push_back(st2.top()->val);
                root2 = st2.top()->right;
                st2.pop();
            }
            else if (st2.empty())
            {
                ans.push_back(st1.top()->val);
                root1 = st1.top()->right;
                st1.pop();
            }

            else if (st1.top()->val <= st2.top()->val)
            {
                ans.push_back(st1.top()->val);
                root1 = st1.top()->right;
                st1.pop();
            }
            else
            {
                ans.push_back(st2.top()->val);
                root2 = st2.top()->right;
                st2.pop();
            }
        }

        return ans;
    }
};
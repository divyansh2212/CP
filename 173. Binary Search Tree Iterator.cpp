// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class BSTIterator
{
public:
    vector<int> nodes;
    int curr = 0;
    void inOrder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inOrder(root->left);
        nodes.push_back(root->val);
        inOrder(root->right);
    }

    BSTIterator(TreeNode *root)
    {
        inOrder(root);
    }

    int next()
    {
        curr++;
        return nodes[curr - 1];
    }

    bool hasNext()
    {
        return curr <= nodes.size() - 1;
    }
};
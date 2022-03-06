#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        TreeNode *rootp = p;
        TreeNode *rootq = q;
        if (rootp == NULL && rootq == NULL)
            return true;
        if (rootp == NULL || rootq == NULL)
            return false;

        stack<TreeNode *> st1, st2;
        st1.push(rootp), st2.push(rootq);

        while (!st1.empty() && !st2.empty())
        {
            rootp = st1.top(), rootq = st2.top();
            st1.pop(), st2.pop();

            if (rootp->val != rootq->val)
                return false;

            if ((rootp->left != NULL && rootq->left == NULL) || (rootp->left == NULL && rootq->left != NULL))
                return false;
            if (rootp->left != NULL)
                st1.push(rootp->left);
            if (rootq->left != NULL)
                st2.push(rootq->left);

            if ((rootp->right != NULL && rootq->right == NULL) || (rootp->right == NULL && rootq->right != NULL))
                return false;
            if (rootp->right != NULL)
                st1.push(rootp->right);
            if (rootq->right != NULL)
                st2.push(rootq->right);
        }
        return true;
    }
};
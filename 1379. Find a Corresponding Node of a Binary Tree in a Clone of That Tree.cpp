// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

```class Solution
{
public:
    TreeNode *ans;

    void traversal(TreeNode *rootOriginal, TreeNode *rootCloned, TreeNode *target)
    {
        if (rootOriginal == NULL || rootCloned == NULL)
            return;

        if (rootOriginal == target)
            ans = rootCloned;

        traversal(rootOriginal->left, rootCloned->left, target);
        traversal(rootOriginal->right, rootCloned->right, target);
    }

    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        if (target == NULL)
            return NULL;
        traversal(original, cloned, target);
        return ans;
    }
};```
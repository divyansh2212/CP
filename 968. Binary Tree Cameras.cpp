// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    // 0 --- this node is done
    // -1 --- this node needs a camera
    // 1 --- camera is installed here

    int installCamera(TreeNode *root, int &ans)
    {
        if (root == NULL)
            return 0;

        int lc = installCamera(root->left, ans);
        int rc = installCamera(root->right, ans);

        if (lc == -1 || rc == -1)
        {
            ans++;
            return 1;
        }

        if (lc == 1 || rc == 1)
            return 0;

        return -1;
    }

    int minCameraCover(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 1;

        int ans = 0;
        int result = installCamera(root, ans);
        if (result == -1)
            ans++;
        return ans;
    }
};
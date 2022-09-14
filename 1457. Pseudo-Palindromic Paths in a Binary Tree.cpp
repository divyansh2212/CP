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
    int getPaths(TreeNode *root, vector<int> &hsh)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
        {
            hsh[root->val]++;
            int cnt = 0, oddCnt = 0;
            for (int i = 1; i <= 9; i++)
            {
                if (hsh[i])
                    cnt = 1;
                if (hsh[i] % 2)
                    oddCnt++;
            }
            hsh[root->val]--;
            if (oddCnt > 1 || cnt == 0)
                return 0;
            return 1;
        }

        hsh[root->val]++;

        int curr = getPaths(root->left, hsh) + getPaths(root->right, hsh);

        hsh[root->val]--;

        return curr;
    }

public:
    int pseudoPalindromicPaths(TreeNode *root)
    {
        vector<int> hsh(10, 0);

        return getPaths(root, hsh);
    }
};
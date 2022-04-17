    // Jai Shree Babosa!

    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    class Solution {
    public:

        vector<int> preOrder;

        void pre(TreeNode* root)
        {
            if(root == NULL)
            return ;
            preOrder.push_back(root->val);
            pre(root->left);
            pre(root->right);
        }

        TreeNode* increasingBST(TreeNode* root) {
            pre(root);

            sort(preOrder.begin(), preOrder.end());

            TreeNode* newRoot = new TreeNode(preOrder[0]);
            TreeNode* temp = newRoot;

            for (int i = 1; i < preOrder.size(); i++)
            {
                temp->right = new TreeNode(preOrder[i]);
                temp = temp->right;
            }
            
            return newRoot;

        }
    };
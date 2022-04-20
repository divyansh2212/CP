// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Declared a pair of vectors where first element is value of each node and second element is address of each node
    vector<pair<int, TreeNode *>> addresses;

    void inOrder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inOrder(root->left);
        addresses.push_back({root->val, root});
        inOrder(root->right);
    }

    void recoverTree(TreeNode *root)
    {
        // Used inorder traversal, since inorder traversal of BST should be sorted
        inOrder(root);

        // Initialized two pointers where the condition of sorted array will be violated
        TreeNode *temp1 = NULL;
        TreeNode *temp2 = NULL;

        // checking the pointers where the array is not sorted
        for (int i = 0; i < addresses.size(); i++)
        {
            if (i == 0)
            {
                if (addresses[i].first > addresses[i + 1].first)
                    temp1 = addresses[i].second;
                continue;
            }
            else if (i == addresses.size() - 1)
            {
                if (addresses[i].first < addresses[i - 1].first)
                    temp2 = addresses[i].second;
                break;
            }
            else if (addresses[i].first < addresses[i - 1].first && addresses[i].first < addresses[i + 1].first)
            {
                if (temp1 == NULL)
                    temp1 = addresses[i].second;
                else
                    temp2 = addresses[i].second;
            }
            else if (addresses[i].first > addresses[i - 1].first && addresses[i].first > addresses[i + 1].first)
            {
                if (temp1 == NULL)
                    temp1 = addresses[i].second;
                else
                    temp2 = addresses[i].second;
            }
        }
        // swapped the values between the two pointers
        swap(temp1->val, temp2->val);
    }
};
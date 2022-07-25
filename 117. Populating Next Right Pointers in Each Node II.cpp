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
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
    Node *construct(Node *root)
    {
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return root;

        if (root->left)
        {
            if (root->right)
                root->left->next = root->right;
            else if (root->next)
            {
                if (root->next->left)
                    root->left->next = root->next->left;
                else if (root->next->right)
                    root->left->next = root->next->right;
            }
        }

        if (root->right && root->next)
        {
            if (root->next->left)
                root->right->next = root->next->left;
            else if (root->next->right)
                root->right->next = root->next->right;
        }

        construct(root->left);
        construct(root->right);

        return root;
    }

public:
    Node *connect(Node *root)
    {
        return construct(root);
    }
};
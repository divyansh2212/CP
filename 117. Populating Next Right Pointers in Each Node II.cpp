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
    Node *find(Node *root)
    {
        if (root == NULL)
            return NULL;
        while (root)
        {
            if (root->left)
                return root->left;
            else if (root->right)
                return root->right;
            root = root->next;
        }
        return NULL;
    }
    Node *construct(Node *root)
    {
        if (root == NULL)
            return root;

        if (root->left)
        {
            if (root->right)
                root->left->next = root->right;
            else
            {
                Node *curr = root->next;
                root->left->next = find(curr);
            }
        }

        if (root->right)
        {
            Node *curr = root->next;
            root->right->next = find(curr);
        }

        construct(root->right);
        construct(root->left);

        return root;
    }

public:
    Node *connect(Node *root)
    {
        return construct(root);
    }
};
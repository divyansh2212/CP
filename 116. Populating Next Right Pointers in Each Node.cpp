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
        if (root == NULL || root->left == NULL)
            return root;

        root->left->next = root->right;
        if (root->next)
            root->right->next = root->next->left;

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
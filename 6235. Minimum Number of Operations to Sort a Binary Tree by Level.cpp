// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

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
    void swap(vector<int> &arr,
              int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    int minSwaps(vector<int> arr,
                 int N)
    {
        int ans = 0;
        vector<int> temp = arr;
        map<int, int> h;

        sort(temp.begin(), temp.end());
        for (int i = 0; i < N; i++)
        {
            h[arr[i]] = i;
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i] != temp[i])
            {
                ans++;
                int init = arr[i];

                swap(arr, i, h[temp[i]]);
                h[init] = h[temp[i]];
                h[temp[i]] = i;
            }
        }
        return ans;
    }

public:
    int minimumOperations(TreeNode *root)
    {
        int ans = 0;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int sz = q.size();
            vector<int> currLevel;

            for (int i = 0; i < sz; i++)
            {
                auto front = q.front();
                q.pop();
                currLevel.push_back(front->val);

                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }
            ans += minSwaps(currLevel, currLevel.size());
        }

        return ans;
    }
};
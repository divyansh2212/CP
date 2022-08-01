// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(int &n, int &k, vector<vector<int>> &ans, vector<int> &curr, int idx)
    {
        if (curr.size() == k)
        {
            ans.push_back(curr);
            return;
        }
        if (idx > n)
            return;

        for (int i = idx; i <= n; i++)
        {
            curr.push_back(i);
            f(n, k, ans, curr, i + 1);
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> curr;
        f(n, k, ans, curr, 1);
        return ans;
    }
};
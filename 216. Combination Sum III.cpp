// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(int &k, int &n, vector<vector<int>> &ans, vector<int> &curr, int idx, int &sum)
    {
        if (curr.size() == k)
        {
            if (sum == n)
                ans.push_back(curr);
            return;
        }

        if (idx > 9)
            return;

        for (int i = idx; i <= 9; i++)
        {
            if (sum + i > n)
                break;
            sum += i;
            curr.push_back(i);
            f(k, n, ans, curr, i + 1, sum);
            sum -= i;
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> curr;
        int sum = 0;
        f(k, n, ans, curr, 1, sum);
        return ans;
    }
};
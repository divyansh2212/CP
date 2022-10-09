// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    ll f(vector<vector<int>> &grid, int &k, ll currSum, int idx1, int idx2, vector<vector<vector<ll>>> &dp)
    {
        int m = grid.size(), n = grid[0].size();
        if (idx1 == m || idx2 == n)
            return 0;
        if (idx1 == m - 1 && idx2 == n - 1)
        {
            if ((currSum + grid[idx1][idx2]) % k == 0)
                return 1LL;
            return 0LL;
        }
        if (dp[idx1][idx2][currSum % k] != -1)
            return dp[idx1][idx2][currSum % k];
        ll right = f(grid, k, currSum + grid[idx1][idx2], idx1, idx2 + 1, dp);
        ll down = f(grid, k, currSum + grid[idx1][idx2], idx1 + 1, idx2, dp);

        return dp[idx1][idx2][currSum % k] = (right + down) % mod;
    }

public:
    int numberOfPaths(vector<vector<int>> &grid, int k)
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<ll>>> dp(m, vector<vector<ll>>(n, vector<ll>(51, -1)));
        return (int)f(grid, k, 0LL, 0, 0, dp);
    }
};
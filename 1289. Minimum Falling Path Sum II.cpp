#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &dp)
    {
        int n = grid.size();
        if (i == 0)
            return grid[0][j];
        if (dp[i][j] != 1e9)
            return dp[i][j];

        int ans = 1e9;

        for (int k = 0; k < n; k++)
        {
            if (k == j)
                continue;
            ans = min(ans, grid[i][j] + f(grid, i - 1, k, dp));
        }

        return dp[i][j] = ans;
    }

    int minFallingPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int ans = 1e9;
        vector<vector<int>> dp(n, vector<int>(n, 1e9));

        for (int j = 0; j < n; j++)
            ans = min(ans, f(grid, n - 1, j, dp));

        return ans;
    }
};
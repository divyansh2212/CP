// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<vector<int>> &grid, int i, int j, int &ans, vector<vector<int>> &dp)
    {
        int m = grid.size(), n = grid[0].size();

        if (i == m - 1 && j == n - 1)
            return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        int way = 0;
        if (j + 1 < n && grid[i][j + 1] == 0)
            way += f(grid, i, j + 1, ans, dp);

        if (i + 1 < m && grid[i + 1][j] == 0)
            way += f(grid, i + 1, j, ans, dp);

        return dp[i][j] = way;
    }

    int uniquePathsWithObstacles(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        if (grid[m - 1][n - 1] == 1 || grid[0][0] == 1)
            return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(grid, 0, 0, ans, dp);
    }
};
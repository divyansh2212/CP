// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<vector<int>> &grid, vector<vector<int>> &moveCost, int idx1, int idx2, vector<vector<int>> &dp)
    {
        if (idx1 == grid.size() - 1)
            return grid[idx1][idx2];
        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];

        int cost = 1e6;
        for (int j = 0; j < grid[0].size(); j++)
        {
            cost = min(cost, grid[idx1][idx2] + moveCost[grid[idx1][idx2]][j] + f(grid, moveCost, idx1 + 1, j, dp));
        }
        return dp[idx1][idx2] = cost;
    }

    int minPathCost(vector<vector<int>> &grid, vector<vector<int>> &moveCost)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int cost = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            cost = min(cost, f(grid, moveCost, 0, j, dp));
        }

        return cost;
    }
};
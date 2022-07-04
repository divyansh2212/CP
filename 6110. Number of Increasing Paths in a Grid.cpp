// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

class Solution
{
public:
    ll f(vector<vector<int>> &grid, int i, int j, vector<vector<bool>> &visited, vector<vector<ll>> &dp)
    {
        if (dp[i][j] != -1)
            return dp[i][j];

        int m = grid.size(), n = grid[0].size();
        visited[i][j] = true;

        ll way1 = 0, way2 = 0, way3 = 0, way4 = 0;  
        if (i + 1 < m && !visited[i + 1][j] && grid[i + 1][j] > grid[i][j])
            way1 += f(grid, i + 1, j, visited, dp);
        if (j + 1 < n && !visited[i][j + 1] && grid[i][j + 1] > grid[i][j])
            way2 += f(grid, i, j + 1, visited, dp);
        if (i - 1 >= 0 && !visited[i - 1][j] && grid[i - 1][j] > grid[i][j])
            way3 += f(grid, i - 1, j, visited, dp);
        if (j - 1 >= 0 && !visited[i][j - 1] && grid[i][j - 1] > grid[i][j])
            way4 += f(grid, i, j - 1, visited, dp);

        return dp[i][j] = (1 + way1 + way2 + way3 + way4);
    }

    int countPaths(vector<vector<int>> &grid)
    {
        ll ans = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vector<vector<bool>> visited(m, vector<bool>(n, false));
                vector<vector<ll>> dp(m, vector<ll>(n, -1));
                ans += f(grid, i, j, visited, dp);
                ans = (ans % M);
            }
        }
        return (int)ans;
    }
};
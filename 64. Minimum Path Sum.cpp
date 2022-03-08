#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(int idxX, int idxY, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (idxX == 0 && idxY == 0)
            return grid[0][0];
        if (dp[idxX][idxY] != -1)
            return dp[idxX][idxY];

        int up = 1e8, left = 1e8;
        if (idxX > 0)
            up = grid[idxX][idxY] + f(idxX - 1, idxY, grid, dp);
        if (idxY > 0)
            left = grid[idxX][idxY] + f(idxX, idxY - 1, grid, dp);

        int ans = min(up, left);

        return dp[idxX][idxY] = ans;
    }

    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        // vector<vector<int>> dp(m, vector<int>(n, -1));
        // return f(m - 1, n - 1, grid, dp);

        vector<int> prev(n, 0);

        for (int i = 0; i < m; i++)
        {
            vector<int> curr(n, 0);
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    curr[j] = grid[i][j];
                    continue;
                }
                int up = 1e8, left = 1e8;
                if (i > 0)
                    up = prev[j] + grid[i][j];
                if (j > 0)
                    left = curr[j - 1] + grid[i][j];
                curr[j] = min(up, left);
            }
            prev = curr;
        }
        return prev[n - 1];
    }
};
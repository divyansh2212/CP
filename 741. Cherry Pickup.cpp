#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int dp[51][51][51][51];

    int f(vector<vector<int>> &grid, int r1, int c1, int r2, int c2)
    {
        int n = grid.size(), m = grid[0].size();
        if (r1 == n - 1 && r2 == n - 1 && c1 == m - 1 && c2 == m - 1)
            return grid[n - 1][m - 1];
        if (r1 == n || r2 == n || c1 == m || c2 == m)
            return -1e8;
        if (grid[r1][c1] == -1 || grid[r2][c2] == -1)
            return -1e8;
        if (dp[r1][c1][r2][c2] != -1)
            return dp[r1][c1][r2][c2];

        int right1 = -1e8, right2 = -1e8, down1 = -1e8, down2 = -1e8;

        int cherries = 0;
        if (r1 == r2 && c1 == c2)
            cherries += grid[r1][c1];
        else
            cherries += grid[r1][c1] + grid[r2][c2];

        right1 = f(grid, r1 + 1, c1, r2 + 1, c2);

        right2 = f(grid, r1 + 1, c1, r2, c2 + 1);

        down1 = f(grid, r1, c1 + 1, r2 + 1, c2);

        down2 = f(grid, r1, c1 + 1, r2, c2 + 1);

        cherries += max(max(right1, right2), max(down1, down2));

        return dp[r1][c1][r2][c2] = cherries;
    }

    int cherryPickup(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        memset(dp, -1, sizeof(dp));

        return f(grid, 0, 0, 0, 0) < 0 ? 0 : f(grid, 0, 0, 0, 0);
    }
};
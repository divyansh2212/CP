#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> move = {1, 0, -1};

    int f(int r1, int c1, int r2, int c2, vector<vector<int>> &grid,vector<vector<vector<vector<int>>>> &dp)
    {
        int n = grid.size(), m = grid[0].size();

        if (c1 >= m || c2 >= m || c1 < 0 || c2 < 0)
            return -1e8;

        if (r1 == n - 1 && r2 == n - 1)
        {
            if (c1 == c2)
                return grid[r1][c1];
            else
                return grid[r1][c1] + grid[r2][c2];
        }
        if (dp[r1][c1][r2][c2] != -1)
            return dp[r1][c1][r2][c2];

        int cherries = 0;
        if (r1 == r2 && c1 == c2)
            cherries += grid[r1][c1];
        else
            cherries += grid[r1][c1] + grid[r2][c2];

        int toadd = -1e8;
        for (int i = 0; i < move.size(); i++)
        {
            for (int j = 0; j < move.size(); j++)
            {
                int y1 = move[i], y2 = move[j];

                toadd = max(toadd, f(r1 + 1, c1 + y1, r2 + 1, c2 + y2, grid, dp));
            }
        }
        cherries += toadd;

        return dp[r1][c1][r2][c2] = cherries;
    }

    int cherryPickup(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<vector<int>>>> dp(n, vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(m, -1))));
        // memset(dp, -1, sizeof(dp));

        return f(0, 0, 0, m - 1, grid, dp);
    }
};
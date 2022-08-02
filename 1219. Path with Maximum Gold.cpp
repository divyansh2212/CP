// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int f(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || grid[i][j] == 0)
            return 0;

        int to_add = grid[i][j];
        grid[i][j] = 0;

        int ans = to_add + max({f(grid, i + 1, j), f(grid, i - 1, j), f(grid, i, j - 1), f(grid, i, j + 1)});

        grid[i][j] = to_add;

        return ans;
    }

public:
    int getMaximumGold(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                    continue;
                ans = max(ans, f(grid, i, j));
            }
        }

        return ans;
    }
};
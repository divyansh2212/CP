// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    int f(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &visited, int &n, int &m)
    {
        if (i < 0 || j < 0 || i == n || j == m || visited[i][j] || grid[i][j] == 0)
            return 0;

        visited[i][j] = true;
        int ans = 1 + f(i + 1, j, grid, visited, n, m) + f(i, j + 1, grid, visited, n, m) + f(i - 1, j, grid, visited, n, m) + f(i, j - 1, grid, visited, n, m);
        return ans;
    }

public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        int ans = 0;

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 1 && visited[i][j] == false)
                    ans = max(ans, f(i, j, grid, visited, n, m));

        return ans;
    }
};
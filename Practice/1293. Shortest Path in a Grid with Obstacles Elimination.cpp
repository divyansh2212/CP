    // <--------------------Jai Shree Babosa-------------------->

    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define inf INT_MAX
    const int mod = 1e9 + 7;

    class Solution
    {

        int f(int i, int j, int k, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
        {
            int n = grid.size(), m = grid[0].size();
            if (i == n - 1 && j == m - 1)
                return 0;
            if (i == n || j == m)
                return 1e8;
            if (dp[k][i][j] != -1)
                return dp[k][i][j];
            int right = 1e8, down = 1e8;

            if (grid[i][j] && k)
                right = 1 + f(i, j + 1, k - 1, grid, dp);
            else if (!grid[i][j])
                right = 1 + f(i, j + 1, k, grid, dp);

            if (grid[i][j] && k)
                down = 1 + f(i + 1, j, k - 1, grid, dp);
            else if (!grid[i][j])
                down = 1 + f(i + 1, j, k, grid, dp);

            return dp[k][i][j] = min(right, down);
        }

    public:
        int shortestPath(vector<vector<int>> &grid, int k)
        {
            int n = grid.size(), m = grid[0].size();
            vector<vector<vector<int>>> dp(k + 1, vector<vector<int>>(n, vector<int>(m, -1)));
            int ans = f(0, 0, k, grid, dp);
            if (ans >= 1e8)
                ans = -1;
            return ans;
        }
    };
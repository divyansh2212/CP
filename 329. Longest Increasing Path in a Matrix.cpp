#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int func(vector<vector<int>> &matrix, int i, int j, vector<vector<int>> &dp)
    {
        int m = matrix.size(), n = matrix[0].size();
        if (dp[i][j] != -1)
            return dp[i][j];

        int up = 1, down = 1, left = 1, right = 1;
        if (i > 0)
            if (matrix[i - 1][j] > matrix[i][j])
                up = 1 + func(matrix, i - 1, j, dp);
        if (j > 0)
            if (matrix[i][j - 1] > matrix[i][j])
                left = 1 + func(matrix, i, j - 1, dp);
        if (i + 1 < m)
            if (matrix[i + 1][j] > matrix[i][j])
                down = 1 + func(matrix, i + 1, j, dp);
        if (j + 1 < n)
            if (matrix[i][j + 1] > matrix[i][j])
                right = 1 + func(matrix, i, j + 1, dp);

        return dp[i][j] = max(max(up, down), max(right, left));
    }

    // int longestIncreasingPath(vector<vector<int>> &matrix)
    // {
    //     int m = matrix.size(), n = matrix[0].size();
    //     int ans = 1;
    //     vector<vector<int>> dp(m, vector<int>(n, -1));

    //     for (int i = 0; i < m; i++)
    //         for (int j = 0; j < n; j++)
    //             ans = max(ans, func(matrix, i, j, dp));

    //     return ans;
    // }

    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 1;
        vector<vector<int>> dp(m, vector<int>(n, 1));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // ans = max(ans, func(matrix, i, j, dp));
                int up = 1, down = 1, left = 1, right = 1;
                if (i > 0)
                    if (matrix[i - 1][j] > matrix[i][j])
                        up = 1 + dp[i - 1][j];
                if (j > 0)
                    if (matrix[i][j - 1] > matrix[i][j])
                        left = 1 + dp[i][j - 1];
                if (i + 1 < m)
                    if (matrix[i + 1][j] > matrix[i][j])
                        down = 1 + dp[i + 1][j];
                if (j + 1 < n)
                    if (matrix[i][j + 1] > matrix[i][j])
                        right = 1 + dp[i][j + 1];
                dp[i][j] = max(dp[i][j], max(max(up, down), max(right, left)));
            }
        }
        return dp[m - 1][n - 1];
    }
};
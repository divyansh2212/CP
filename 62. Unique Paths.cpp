#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(int idxX, int idxY, int m, int n, vector<vector<int>> &dp)
    {
        if (idxX < 0 || idxY < 0)
            return 0;
        if (idxX == 0 && idxY == 0)
            return 1;
        if (dp[idxX][idxY] != -1)
            return dp[idxX][idxY];

        int path1 = f(idxX - 1, idxY, m, n, dp);
        int path2 = f(idxX, idxY - 1, m, n, dp);

        return dp[idxX][idxY] = path1 + path2;
    }

    int uniquePaths(int m, int n)
    {
        // vector<vector<int>> dp(m, vector<int>(n, -1));
        // return f(m - 1, n - 1, m, n, dp);

        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    continue;

                int up = 0, left = 0;
                if (i > 0)
                    up = dp[i - 1][j];
                if (j > 0)
                    left = dp[i][j - 1];

                dp[i][j] = up + left;
            }
        }
        return dp[m - 1][n - 1];
    }

    int uniquePaths(int m, int n)
    {
        vector<int> prev(n, 0);
        // prev[0] = 1;

        for (int i = 0; i < m; i++)
        {
            vector<int> curr(n, 0);
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    curr[j] = 1;

                else
                {
                    int up = 0, left = 0;
                    up = prev[j];
                    if (j > 0)
                        left = curr[j - 1];

                    curr[j] = up + left;
                }
            }
            prev = curr;
        }
        return prev[n - 1];
    }

};
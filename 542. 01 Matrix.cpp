#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 1e7 - 100));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                    dp[i][j] = 0;
                else
                {
                    int up = 1e7, left = 1e7;
                    if (i > 0)
                        up = 1 + dp[i - 1][j];
                    if (j > 0)
                        left = 1 + dp[i][j - 1];

                    dp[i][j] = min(up, left);
                }
            }
        }
        for (int i = m - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (mat[i][j] == 0)
                    dp[i][j] = 0;
                else
                {
                    int down = 1e7, right = 1e7;
                    if (i + 1 < m)
                        down = 1 + dp[i + 1][j];
                    if (j + 1 < n)
                        right = 1 + dp[i][j + 1];
                    dp[i][j] = min(dp[i][j], min(down, right));
                }
            }
        }
        return dp;
    }
};
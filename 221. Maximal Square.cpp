#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int func(int i, int j, vector<vector<char>> &matrix, vector<vector<int>> &dp)
    {
        int n = matrix.size(), m = matrix[0].size();
        if (i >= n || j >= m)
            return 0;
        if (matrix[i][j] == '0')
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        int down = 1, right = 1, rightdg = 1;

        down = 1 + func(i + 1, j, matrix, dp);

        right = 1 + func(i, j + 1, matrix, dp);

        rightdg = 1 + func(i + 1, j + 1, matrix, dp);

        return dp[i][j] = min(down, min(right, rightdg));
    }

    int maximalSquare(vector<vector<char>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        int mxm = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (matrix[i][j] == '1')
                    mxm = max(mxm, func(i, j, matrix, dp));

        return mxm * mxm;
    }
};
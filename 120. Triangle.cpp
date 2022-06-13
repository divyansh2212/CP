// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<vector<int>> &triangle, int i, int j, vector<vector<int>> &dp)
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        if (i == triangle.size() - 1)
            return triangle[i][j];

        int down = 1e8, downRight = 1e8;

        down = triangle[i][j] + f(triangle, i + 1, j, dp);
        downRight = triangle[i][j] + f(triangle, i + 1, j + 1, dp);

        return dp[i][j] = min(down, downRight);
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();

        vector<int> curr(n, 0), next(n, 0);

        for (int j = 0; j < n; j++)
            next[j] = triangle[n - 1][j];

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = triangle[i].size() - 1; j >= 0; j--)
            {
                int down = 1e8, downRight = 1e8;

                down = triangle[i][j] + next[j];
                downRight = triangle[i][j] + next[j + 1];
                curr[j] = min(down, downRight);
            }
            next = curr;
        }
        return next[0];
    }
};
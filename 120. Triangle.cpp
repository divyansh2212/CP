#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int func(int i, int j, vector<vector<int>> &triangle, vector<vector<int>> &dp)
    {
        if (j < 0 || j >= triangle[i].size())
            return 1e8;
        if (i == 0)
            return triangle[i][j];
        if (dp[i][j] != 1e8)
            return dp[i][j];

        int upper = triangle[i][j] + func(i - 1, j, triangle, dp);
        int uleft = triangle[i][j] + func(i - 1, j - 1, triangle, dp);

        int profit = min(upper, uleft);

        return dp[i][j] = profit;
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        int profit = 1e8;
        vector<int> prev(n, 1e8);

        prev[0] = triangle[0][0];

        for (int i = 1; i < n; i++)
        {
            vector<int> curr(n, 1e8);
            for (int j = 0; j < triangle[i].size(); j++)
            {
                int uleft = 1e8;
                int upper = triangle[i][j] + prev[j];
                if (j > 0)
                    uleft = triangle[i][j] + prev[j - 1];

                curr[j] = min(upper, uleft);
            }
            prev = curr;
        }

        int mini = 1e8;
        for (int j = 0; j < n; j++)
            mini = min(mini, prev[j]);

        return mini;
    }
};
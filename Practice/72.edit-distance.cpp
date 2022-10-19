/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 */
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;
// @lc code=start
class Solution
{

    int f(int idx1, int idx2, string &word1, string &word2, vector<vector<int>> &dp)
    {
        if (idx2 < 0)
            return idx1 + 1;
        if (idx1 < 0)
            return idx2 + 1;

        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];

        if (word1[idx1] == word2[idx2])
            return dp[idx1][idx2] = f(idx1 - 1, idx2 - 1, word1, word2, dp);
        else
        {
            // replace
            int way1 = 1 + f(idx1 - 1, idx2 - 1, word1, word2, dp);

            // delete
            int way2 = 1 + f(idx1 - 1, idx2, word1, word2, dp);

            // insert
            int way3 = 1 + f(idx1, idx2 - 1, word1, word2, dp);

            return dp[idx1][idx2] = min({way1, way2, way3});
        }
    }

public:
    int minDistance(string word1, string word2)
    {
        int n = word1.size(), m = word2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int idx2 = 0; idx2 < m + 1; idx2++)
            dp[0][idx2] = idx2;
        for (int idx1 = 0; idx1 < n + 1; idx1++)
            dp[idx1][0] = idx1;
        

        for (int idx1 = 1; idx1 <= n; idx1++)
        {
            for (int idx2 = 1; idx2 <= m; idx2++)
            {
                if (word1[idx1 - 1] == word2[idx2 - 1])
                    dp[idx1][idx2] = dp[idx1 - 1][idx2 - 1];
                else
                {
                    // replace
                    int way1 = 1 + dp[idx1 - 1][idx2 - 1];

                    // delete
                    int way2 = 1 + dp[idx1 - 1][idx2];

                    // insert
                    int way3 = 1 + dp[idx1][idx2 - 1];

                    dp[idx1][idx2] = min({way1, way2, way3});
                }
            }
        }
        return dp[n][m];
    }
};
// @lc code=end

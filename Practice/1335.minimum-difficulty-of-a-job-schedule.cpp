/*
 * @lc app=leetcode id=1335 lang=cpp
 *
 * [1335] Minimum Difficulty of a Job Schedule
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
    int f(vector<int> &jobDifficulty, int idx, int d, vector<vector<int>> &dp)
    {
        if (idx == jobDifficulty.size())
            return 1e8;
        if (d == 1)
        {
            int mx = -1;
            for (int i = idx; i < jobDifficulty.size(); i++)
                mx = max(mx, jobDifficulty[i]);

            return mx;
        }
        if (dp[idx][d] != -1)
            return dp[idx][d];

        int mx = -1;
        int ans = 1e8;
        for (int i = idx; i < jobDifficulty.size(); i++)
        {
            mx = max(mx, jobDifficulty[i]);
            ans = min(ans, mx + f(jobDifficulty, i + 1, d - 1, dp));
        }
        return dp[idx][d] = ans;
    }

public:
    int minDifficulty(vector<int> &jobDifficulty, int d)
    {
        int n = jobDifficulty.size();
        if (d > n)
            return -1;
        vector<vector<int>> dp(n, vector<int>(d + 1, -1));
        return f(jobDifficulty, 0, d, dp);
    }
};
// @lc code=end

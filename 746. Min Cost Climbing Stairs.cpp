// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n + 1, 0);
        dp[0] = cost[0], dp[1] = cost[1];

        for (int idx = 2; idx < n + 1; idx++)
        {
            dp[idx] = dp[idx - 1];
            dp[idx] = min(dp[idx], dp[idx - 2]);
            if (idx != n)
                dp[idx] += cost[idx];
        }

        return dp[n];
    }
};
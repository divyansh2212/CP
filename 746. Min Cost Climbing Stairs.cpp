#include <bits/stdc++.h>
using namespace std;

int dp[3000];

int helper(vector<int> &cost, int idx)
{
    if (idx == cost.size())
        return 0;
    if (idx > cost.size())
        return 1e9;
    if (dp[idx] != -1)
        return dp[idx];
    int total_cost = 1e9;

    total_cost = min(total_cost, helper(cost, idx + 1) + cost[idx]);
    total_cost = min(total_cost, helper(cost, idx + 2) + cost[idx]);

    return dp[idx] = total_cost;
}

int minCostClimbingStairs(vector<int> &cost)
{
    memset(dp, -1, sizeof(dp));
    int ans = helper(cost, 0);
    ans = min(ans, helper(cost, 1));
    return ans;
}
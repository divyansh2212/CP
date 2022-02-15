#include <bits/stdc++.h>
using namespace std;

int dp[500];

int func(vector<int> &nums, int idx)
{
    if (idx >= nums.size())
        return 0;
    if (dp[idx] != -1)
        return dp[idx];

    int total_money = max(func(nums, idx + 2) + nums[idx], func(nums, idx + 1));

    return dp[idx] = total_money;
}

int rob(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));

    return func(nums, 0);
}
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &nums, vector<bool> &visited, vector<int> &dp, int idx)
{
    idx = idx % nums.size();
    if (visited[idx] == true)
        return 0;
    if (dp[idx] != -1)
        return dp[idx];
    visited[idx] = true;
    int total_money = func(nums, visited, dp, idx + 2) + nums[idx];
    visited[idx] = false;
    total_money = max(total_money, func(nums, visited, dp, idx + 1));

    return dp[idx] = total_money;
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<bool> visited(n, false);
    vector<int> dp(n + 1, -1);

    cout << func(nums, visited, dp, 0);
}
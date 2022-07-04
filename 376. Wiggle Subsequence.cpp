// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<int> &nums, int idx, bool flag, int prev, vector<vector<vector<int>>> &dp)
    {
        if (idx == nums.size())
            return 0;
        if (dp[idx][prev + 1][flag] != -1)
            return dp[idx][prev  + 1][flag];
        int take = 0;
        if (prev == -1)
        {
            take = 1 + max(f(nums, idx + 1, true, idx, dp), f(nums, idx + 1, false, idx, dp));
        }
        else
        {
            if (flag && nums[idx] > nums[prev])
                take = 1 + f(nums, idx + 1, false, idx, dp);
            else if (flag == false && nums[idx] < nums[prev])
                take = 1 + f(nums, idx + 1, true, idx, dp);
        }
        int notTake = f(nums, idx + 1, flag, prev, dp);

        return dp[idx][prev + 1][flag] = max(take, notTake);
    }

    int wiggleMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n + 1, vector<int>(2, -1)));
        return max(f(nums, 0, true, -1, dp), f(nums, 0, false, -1, dp));
    }
};
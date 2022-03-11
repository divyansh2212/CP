#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<int> &nums, int idx, int deleted, vector<vector<int>> &dp, int total)
    {
        if (idx == 0)
        {
            if (nums[0] != deleted)
                return nums[0];
            return 0;
        }
        if (dp[idx][total] != -1)
            return dp[idx][total];

        int notTake = f(nums, idx - 1, deleted, dp, total);
        int take = 0;
        if (nums[idx] != deleted && total - nums[idx] >= 0)
        {
            deleted = nums[idx] - 1;
            take = nums[idx] + f(nums, idx - 1, deleted, dp, total - nums[idx]);
        }

        return dp[idx][total] = max(take, notTake);
    }

    int deleteAndEarn(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int tot = 0;
        for (auto &it : nums)
            tot += it;
        vector<vector<int>> dp(n, vector<int>(tot + 1, -1));
        return f(nums, n - 1, 0, dp, tot);
    }
};
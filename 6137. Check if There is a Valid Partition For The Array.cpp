// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    bool f(vector<int> &nums, int idx, vector<int> &dp)
    {
        if (idx == nums.size())
            return true;
        if (dp[idx] != -1)
            return dp[idx];

        bool flag = false;
        if (idx + 1 < nums.size() && nums[idx] == nums[idx + 1])
        {
            flag = f(nums, idx + 2, dp);
            if (idx + 2 < nums.size() && nums[idx + 2] == nums[idx])
                flag |= f(nums, idx + 3, dp);
        }

        if (idx + 2 < nums.size() && nums[idx + 1] - nums[idx] == 1 && nums[idx + 2] - nums[idx + 1] == 1)
            flag |= f(nums, idx + 3, dp);

        return dp[idx] = flag;
    }

public:
    bool validPartition(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, -1);
        return f(nums, 0, dp);
    }
};
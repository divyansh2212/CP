// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{

    int f(vector<int> &nums, vector<int> &multipliers, int idx, int left, int right, vector<vector<int>> &dp)
    {
        if (idx == multipliers.size())
            return 0;

        if (dp[idx][left] != inf)
            return dp[idx][left];

        int way1 = multipliers[idx] * nums[left] + f(nums, multipliers, idx + 1, left + 1, right, dp);
        int way2 = multipliers[idx] * nums[right] + f(nums, multipliers, idx + 1, left, right - 1, dp);

        return dp[idx][left] = max(way1, way2);
    }

public:
    int maximumScore(vector<int> &nums, vector<int> &multipliers)
    {
        int n = nums.size(), m = multipliers.size();
        vector<vector<int>> dp(m, vector<int>(1000, inf));

        return f(nums, multipliers, 0, 0, n - 1, dp);
    }
};
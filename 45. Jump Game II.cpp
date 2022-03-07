#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<int> &nums, int idx, int n, vector<int> &dp)
    {
        if (idx == n - 1)
            return 0;
        if (nums[idx] == 0)
            return 1e7;
        if (dp[idx] != -1)
            return dp[idx];

        int minJumps = 1e8;
        for (int jumps = 1; jumps <= nums[idx]; jumps++)
        {
            if (idx + jumps < n)
                minJumps = min(minJumps, f(nums, idx + jumps, n, dp) + 1);
        }
        return minJumps;
    }

    int jump(vector<int> &nums)
    {
        int n = nums.size();
        // vector<int> dp(n, -1);
        // return f(nums, 0, n, dp);

        vector<int> dp(n, 1e8);
        dp[n - 1] = 0;

        for (int idx = n - 2; idx > 0; idx--)
        {
            for (int jumps = 1; jumps <= nums[idx]; jumps++)
            {
                if (idx + jumps < n)
                    dp[idx] = min(dp[idx], dp[idx + jumps] + 1);
            }
        }
        return dp[0];
    }
};
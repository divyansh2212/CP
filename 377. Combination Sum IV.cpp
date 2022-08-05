// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;

        for (int tar = 1; tar <= target; tar++)
            for (int i = 0; i < nums.size(); i++)
                if (tar >= nums[i])
                    dp[tar] += dp[tar - nums[i]];

        return dp[target];
    }
};
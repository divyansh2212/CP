#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int findWays(vector<int> &nums, int target, int idx)
    {
        if (idx == 0)
        {
            if (nums[0] == 0 && target == 0)
                return 2;
            if (nums[0] == target)
                return 1;
            return 0;
        }
        int notTake = findWays(nums, target, idx - 1);
        int take = 0;
        if (target >= nums[idx])
            take = findWays(nums, target - nums[idx], idx - 1);
        return take + notTake;
    }

    int f(vector<int> &nums, int d)
    {
        int tot = 0;
        for (auto &it : nums)
            tot += it;

        if ((tot - d) < 0 || (tot - d) % 2)
            return 0;

        int target = (tot - d) / 2;

        return findWays(nums, target, nums.size() - 1);
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        return f(nums, target);
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> nums1, nums2;
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                nums1.push_back(nums[i]);
            if (i != n - 1)
                nums2.push_back(nums[i]);
        }

        vector<int> dp1(n, -1);
        dp1[0] = nums1[0];
        for (int i = 1; i < nums1.size(); i++)
        {
            int take = nums1[i];
            if (i > 1)
                take += dp1[i - 2];

            int notTake = dp1[i - 1];

            dp1[i] = max(take, notTake);
        }
        int ans1 = dp1[nums1.size() - 1];

        vector<int> dp2(n, -1);
        dp2[0] = nums2[0];
        for (int i = 1; i < nums2.size(); i++)
        {
            int take = nums[i];
            if (i > 1)
                take += dp[i - 2];

            int notTake = dp2[i - 1];

            dp2[i] = max(take, notTake);
        }
        int ans2 = dp[nums2.size() - 1];

        return max(ans1, ans2);
    }
};
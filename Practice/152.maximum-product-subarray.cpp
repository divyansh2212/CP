/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size(), ans = nums[0], minm = nums[0], maxm = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < 0)
                swap(minm, maxm);
            minm = min(nums[i], minm * nums[i]);
            maxm = max(nums[i], nums[i] * maxm);
            ans = max(ans, maxm);
        }
        return ans;
    }
};
// @lc code=end

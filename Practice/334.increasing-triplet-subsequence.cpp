/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        ll first = 1e12, second = 1e13;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= first)
                first = nums[i];
            else if (nums[i] <= second)
                second = nums[i];
            else
                return true;
        }

        return false;
    }
};
// @lc code=end

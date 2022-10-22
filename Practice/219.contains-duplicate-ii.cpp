// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> indexMp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (indexMp.find(nums[i]) != indexMp.end() && i - indexMp[nums[i]] <= k)
                return true;
            indexMp[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end

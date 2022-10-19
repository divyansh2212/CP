/*
 * @lc app=leetcode id=2161 lang=cpp
 *
 * [2161] Partition Array According to Given Pivot
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
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> smaller, greater;
        int equal = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < pivot)
                smaller.push_back(nums[i]);
            else if (nums[i] == pivot)
                equal++;
            else
                greater.push_back(nums[i]);
        }

        while (equal--)
            smaller.push_back(pivot);

        for (int i = 0; i < greater.size(); i++)
            smaller.push_back(greater[i]);
        return smaller;
    }
};
// @lc code=end

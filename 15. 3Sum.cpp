// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;

            int lo = i + 1, hi = nums.size() - 1, to_find = -1 * nums[i];

            while (lo < hi)
            {
                if (nums[lo] + nums[hi] > to_find)
                    hi--;
                else if (nums[lo] + nums[hi] < to_find)
                    lo++;
                else
                {
                    ans.push_back({nums[i], nums[lo], nums[hi]});
                    int curr_lo = lo, curr_hi = hi;
                    while (lo < hi && nums[curr_lo] == nums[lo])
                        lo++;
                    while (lo < hi && nums[curr_hi] == nums[hi])
                        hi--;
                }
            }
        }
        return ans;
    }
};
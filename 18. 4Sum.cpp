// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if (j != i + 1 && nums[j] == nums[j - 1])
                    continue;
                int lo = j + 1, hi = n - 1;
                int to_find = target - nums[i] - nums[j];

                while (lo < hi)
                {
                    if (nums[lo] + nums[hi] > to_find)
                        hi--;
                    else if (nums[lo] + nums[hi] < to_find)
                        lo++;
                    else
                    {
                        ans.push_back({nums[i], nums[j], nums[lo], nums[hi]});
                        int curr_low = lo, curr_hi = hi;
                        while (lo < hi && nums[curr_low] == nums[lo])
                            lo++;
                        while (lo < hi && nums[curr_hi] == nums[hi])
                            hi--;
                    }
                }
            }
        }
        return ans;
    }
};
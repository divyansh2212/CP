#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans(2, -1);

        int lo = 0, hi = nums.size() - 1, mid;

        while (lo <= hi)
        {
            mid = (hi + lo) / 2;

            if (nums[mid] < target)
                lo = mid + 1;
            else if (nums[mid] == target)
                hi = mid - 1;
            else if (nums[mid] > target)
                hi = mid - 1;
        }
        if (hi >= 0 && hi < nums.size() && nums[hi] == target)
            ans[0] = hi;
        else if (lo >= 0 && lo < nums.size() && nums[lo] == target)
            ans[0] = lo;
        if (ans[0] == -1)
            return ans;

        hi = nums.size() - 1, lo = 0;

        while (lo <= hi)
        {
            mid = (hi + lo) / 2;

            if (nums[mid] < target)
                lo = mid + 1;
            else if (nums[mid] == target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        if (lo >= 0 && lo < nums.size() && nums[lo] == target)
            ans[1] = lo;
        else if (hi >= 0 && hi < nums.size() && nums[hi] == target)
            ans[1] = hi;

        return ans;
    }
};
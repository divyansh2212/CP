// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans = {-1, -1};

        int n = nums.size(), lo = 0, hi = n - 1, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
                ans[0] = mid, hi = mid - 1;
            else if (nums[mid] > target)
                hi = mid - 1;
            else
                lo = mid + 1;
        }

        if (ans[0] == -1)
            return ans;

        lo = 0, hi = n - 1;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
                ans[1] = mid, lo = mid + 1;
            else if (nums[mid] > target)
                hi = mid - 1;
            else
                lo = mid + 1;
        }

        return ans;
    }
};
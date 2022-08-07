// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size(), lo = 0, hi = n - 1, mid, ans = nums[0];

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (mid > 0 && nums[mid] < nums[mid - 1])
                return nums[mid];
            if (mid + 1 < n && nums[mid] > nums[mid + 1])
                return nums[mid + 1];

            if (nums[hi] < nums[mid])
                lo = mid + 1;
            else if (nums[lo] > nums[mid])
                hi = mid - 1;
            else
                return nums[lo];
        }
        return ans;
    }
};
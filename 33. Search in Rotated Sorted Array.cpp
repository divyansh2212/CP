// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size(), lo = 0, hi = n - 1, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[lo] == target)
                return lo;
            if (nums[hi] == target)
                return hi;
            if (nums[lo] < nums[mid])
            {
                if (target >= nums[lo] && target < nums[mid])
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            else
            {
                if (target > nums[mid] && target <= nums[hi])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }

        return -1;
    }
};
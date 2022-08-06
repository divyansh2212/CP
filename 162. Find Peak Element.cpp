// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size(), lo = 0, hi = n - 1, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if ((mid == 0 || nums[mid] > nums[mid - 1]) && (mid == n - 1 || nums[mid] > nums[mid + 1]))
                return mid;
            if (mid == 0 || nums[mid] > nums[mid - 1])
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return -1;
    }
};
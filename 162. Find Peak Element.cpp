// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int binarySearch(vector<int> &nums, int lo, int hi)
    {
        if (hi < lo)
            return -1;

        int mid = lo + (hi - lo) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return mid;

        int f = -1;
        f = binarySearch(nums, lo, mid - 1);
        f = max(f, binarySearch(nums, mid + 1, hi));

        return f;
    }

    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;

        return binarySearch(nums, 1, n - 2);
    }
};
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums[0] > nums[1])
            return 1;
        if (nums[nums.size() - 1] > nums[nums.size() - 2])
            return nums.size() - 1;

        int lo = 0, hi = nums.size() - 1, mid;

        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (nums[mid] < nums[mid + 1])
                lo = mid + 1;
                else hi = mid;
        }
    }
};
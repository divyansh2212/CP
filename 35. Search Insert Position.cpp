// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int lo = 0, hi = nums.size() - 1, mid;
        
        if(target < nums[0])
            return 0;
        
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                lo = mid + 1;

            else
                hi = mid - 1;
        }
        return lo;
    }
};
// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool test(vector<int> &nums, int m, int maxsum)
    {
        m--;
        ll curr = 0;
        for (auto &x : nums)
        {
            if (curr + x <= maxsum)
                curr += x;
            else
            {
                m--;
                curr = x;
            }
        }
        return m >= 0;
    }

    int splitArray(vector<int> &nums, int m)
    {
        ll lo = *max_element(nums.begin(), nums.end()), hi = accumulate(nums.begin(), nums.end(), 0), mid;
        int ans = lo;
        while (lo <= hi)
        {
            mid = hi + (lo - hi) / 2;
            if (test(nums, m, mid))
            {
                hi = mid - 1;
                ans = mid;
            }
            else
                lo = mid + 1;
        }
        return ans;
    }
};
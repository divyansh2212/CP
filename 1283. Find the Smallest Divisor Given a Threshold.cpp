// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int check(vector<int> &nums, int x)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            ans += ceil((nums[i] * 1.0) / x);

        return ans;
    }

public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int lo = 1, hi = *max_element(nums.begin(), nums.end()), mid, ans = 1;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;

            if (check(nums, mid) <= threshold)
                hi = mid - 1, ans = mid;
            else
                lo = mid + 1;
        }

        return ans;
    }
};
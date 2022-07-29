// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int f(vector<int> &nums, int idx, int xr)
    {
        if (idx == nums.size())
            return xr;

        int ans = f(nums, idx + 1, xr ^ nums[idx]);
        ans += f(nums, idx + 1, xr);

        return ans;
    }

public:
    int subsetXORSum(vector<int> &nums)
    {
        return f(nums, 0, 0);
    }
};
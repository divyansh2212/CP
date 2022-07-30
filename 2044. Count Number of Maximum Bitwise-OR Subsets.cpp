// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int ans = 0;
    void f(vector<int> &nums, int idx, int xr, int &mx)
    {
        if (idx == nums.size())
        {
            if (xr == mx)
                ans++;
            return;
        }

        // not take
        f(nums, idx + 1, xr, mx);
        // take
        f(nums, idx + 1, (xr | nums[idx]), mx);
    }

public:
    int countMaxOrSubsets(vector<int> &nums)
    {
        int xr = 0;
        for (int i = 0; i < nums.size(); i++)
            xr = (nums[i] | xr);

        f(nums, 0, 0, xr);

        return ans;
    }
};
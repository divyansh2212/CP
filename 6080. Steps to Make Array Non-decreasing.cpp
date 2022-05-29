// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int totalSteps(vector<int> &nums)
    {
        if (is_sorted(nums.begin(), nums.end()))
            return 0;

        int n = nums.size(), ans = INT_MIN;

        int lastIdx = 0, i;

        for (i = 1; i < n; i++)
        {
            if (nums[i] < nums[lastIdx])
                continue;

            else
            {
                ans = max(i - lastIdx - 1, ans);
                lastIdx = i;
            }
        }

        ans = max(ans, i - lastIdx - 1);

        return ans;
    }
};
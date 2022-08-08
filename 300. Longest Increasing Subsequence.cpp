// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> next(n + 1, 0);

        for (int idx = n - 1; idx >= 0; idx--)
        {
            vector<int> curr(n + 1, 0);
            for (int last = idx - 1; last >= -1; last--)
            {
                int notpick = next[last + 1];
                int pick = 0;
                if (last == -1 || nums[idx] > nums[last])
                    pick = 1 + next[idx + 1];

                curr[last + 1] = max(pick, notpick);
            }
            next = curr;
        }

        return next[0];
    }
};
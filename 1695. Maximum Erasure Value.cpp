// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);
        for (int i = 1; i < n + 1; i++)
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];

        int ans = 0;

        int start = -1;
        vector<int> hsh(1e5+10, -1);

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, nums[i]);
            if (hsh[nums[i]] > start)
                start = hsh[nums[i]];

            ans = max(ans, prefixSum[i + 1] - prefixSum[start + 1]);

            hsh[nums[i]] = i;
        }

        return ans;
    }
};
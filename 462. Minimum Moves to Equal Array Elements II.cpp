// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        ll mean1 = nums[(n - 1) / 2];
        ll mean2 = nums[ceil((n - 1) / 2.0)];

        int ans = 0, ans2 = 0;

        for (int i = 0; i < n; i++)
        {
            ans += abs(nums[i] - mean1);
            ans2 += abs(nums[i] - mean2);
        }

        return min(ans, ans2);
    }
};
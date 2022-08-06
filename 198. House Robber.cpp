// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int prev = nums[n - 1], prev2 = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            int rob = nums[i] + prev2, notrob = prev;
            int curr = max(rob, notrob);
            prev2 = prev, prev = curr;
        }

        return prev;
    }
};
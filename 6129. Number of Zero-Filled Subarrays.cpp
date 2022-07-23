// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        ll ans = 0, streak = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                streak++;
            else
                ans += (streak * (streak + 1)) / 2, streak = 0;
        }
        ans += (streak * (streak + 1)) / 2;

        return ans;
    }
};
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        nums.push_back(1e7);
        ll ans = 0;
        int i = 0, j = 0, n = nums.size(), mini = 1e8, mxi = -1e8;

        while (j < n)
        {
            if (nums[j] == minK)
                mini = min(mini, j);
            if (nums[j] == maxK)
                mxi = max(mxi, j);

            if (nums[j] < minK || nums[j] > maxK)
            {
                if (mini != 1e8 && mxi != -1e8 && j - 1 >= i)
                    ans += ((j - 1 - i + 1) - (mini - 1 - i + 1));
                mini = 1e8, mxi = -1e8;
                i = j + 1;
                j++;
            }
            else
                j++;
        }
        return ans;
    }
};
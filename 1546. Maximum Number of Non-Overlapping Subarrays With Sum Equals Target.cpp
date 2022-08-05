// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maxNonOverlapping(vector<int> &nums, int target)
    {
        int ans = 0;

        unordered_map<int, int> mp;
        mp[0] = -1;
        int last = -1, sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (mp.find(sum - target) != mp.end())
                if (mp[sum - target] >= last)
                    last = i, ans++;

            mp[sum] = i;
        }

        return ans;
    }
};
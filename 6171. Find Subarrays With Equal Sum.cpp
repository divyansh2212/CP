// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    bool findSubarrays(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (mp.find(nums[i] + nums[i + 1]) != mp.end())
                return true;
            mp[nums[i] + nums[i + 1]]++;
        }
        return false;
    }
};
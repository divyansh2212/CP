// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        ll pairs = 0, n = nums.size();

        map<ll, ll> mp;

        for (int i = 0; i < nums.size(); i++)
            mp[i - nums[i]]++;

        ll total_pairs = (n * (n - 1)) / 2;

        for (auto &it : mp)
            pairs += (it.second * (it.second - 1)) / 2;

        return total_pairs - pairs;
    }
};
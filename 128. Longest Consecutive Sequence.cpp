// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;

        int ans = 0, curr = 0;
        int last = INT_MAX;

        for (auto &it : mp)
        {
            if (last == INT_MAX || it.first - last == 1)
                curr++;
            else
                curr = 1;
            ans = max(ans, curr);
            last = it.first;
        }
        return ans;
    }
};
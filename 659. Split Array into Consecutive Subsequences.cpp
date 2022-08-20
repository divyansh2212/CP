// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    bool isPossible(vector<int> &nums)
    {
        unordered_map<int, int> freq_mp;
        for (int i = 0; i < nums.size(); i++)
            freq_mp[nums[i]]++;

        unordered_map<int, int> need_mp;

        for (int &num : nums)
        {
            if (freq_mp[num] == 0)
                continue;

            if (need_mp[num] > 0)
            {
                freq_mp[num]--, need_mp[num]--;
                need_mp[num + 1]++;
            }

            else if (freq_mp[num] > 0 && freq_mp[num + 1] > 0 && freq_mp[num + 2] > 0)
            {
                freq_mp[num]--, freq_mp[num + 1]--, freq_mp[num + 2]--;
                need_mp[num + 3]++;
            }
            else
                return false;
        }

        return true;
    }
};
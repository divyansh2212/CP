// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int ans = 0;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            int to_find = k - nums[i];
            if (m[to_find])
            {
                ans++;
                m[to_find]--;
            }
            else
                m[nums[i]]++;
        }

        return ans;
    }
};
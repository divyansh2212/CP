// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
                mp[nums[i]]++;
        }

        sort(nums.begin(), nums.end());
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0 && mp[-1 * nums[i]] > 0)
                ans = nums[i];
        }
        return ans;
    }
};
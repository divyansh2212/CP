// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maximumSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> hsh(82);

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0, c = nums[i];
            while (c)
            {
                sum += (c % 10);
                c = (c / 10);
            }
            hsh[sum].push_back(nums[i]);
        }

        int ans = -1;
        for (int i = 0; i < 82; i++)
        {
            if (hsh[i].size() > 1)
                ans = max(ans, hsh[i][hsh[i].size() - 1] + hsh[i][hsh[i].size() - 2]);
        }
        return ans;
    }
};
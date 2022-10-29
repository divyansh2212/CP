// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int destroyTargets(vector<int> &nums, int space)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[nums.size() - 1], maxm = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int cnt = 0;
            for (int j = i; j < nums.size(); j++)
                if ((nums[j] - nums[i]) % space == 0)
                    cnt++;
            if (cnt > maxm)
                ans = nums[i], maxm = cnt;
        }

        return ans;
    }
};
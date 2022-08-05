// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size(), ans = arr[0] + arr[1], i = 0, j = n - 1;

        while (i < j)
        {
            ans = max(ans, nums[i] + nums[j]);
            i++, j--;
        }

        return ans;
    }
};
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int subarrayLCM(vector<int> &nums, int k)
    {
        int n = nums.size(), ans = 0;

        for (int i = 0; i < n; i++)
        {
            int curr = nums[i];
            for (int j = i; j < n; j++)
            {
                int lcm = (curr * nums[j]) / __gcd(curr, nums[j]);
                if (lcm > k)
                    break;
                if (lcm == k)
                    ans++;
                curr = lcm;
            }
        }
        return ans;
    }
};
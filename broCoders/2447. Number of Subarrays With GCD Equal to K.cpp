// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int subarrayGCD(vector<int> &nums, int k)
    {
        int n = nums.size(), ans = 0;

        for (int i = 0; i < n; i++)
        {
            int gcd = nums[i];
            for (int j = i; j < n; j++)
            {
                gcd = __gcd(gcd, nums[j]);
                if (gcd == k)
                    ans++;
            }
        }

        return ans;
    }
};
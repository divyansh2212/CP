// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    long long minimumReplacement(vector<int> &nums)
    {
        int n = nums.size(), greatest = nums[n - 1];
        ll ans = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] <= greatest)
                greatest = min(greatest, nums[i]);
            else
            {
                if (greatest == 1)
                    ans += nums[i] - 1;
                else
                {
                    // int x = 2;
                    // while (1)
                    // {
                    //     ll number = nums[i] / x;
                    //     number += (nums[i] % x);
                    //     if (number > greatest)
                    //         x++;
                    //     else
                    //         break;
                    // }
                    // ans += x - 1;
                    // greatest = min(greatest, nums[i] / x);
                    ans += ceil((nums[i]*1.0)/ greatest) - 1;
                }
            }
        }
        return ans;
    }
};
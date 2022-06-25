// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maximumXOR(vector<int> &nums)
    {
        vector<int> hsh(32, 0);
        for (int n = 0; n < nums.size(); n++)
        {
            for (int i = 0; i < 32; i++)
                if ((nums[n] & (1 << i)) != 0)
                    hsh[i]++;
        }

        int ans = 0;

        for (int i = 0; i < 32; i++)
            if (hsh[i])
                ans = (ans | (1 << i));

        return ans;
    }
};
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {

        vector<int> hsh(1e5 + 1, 0);
        for (int i = 0; i < nums.size(); i++)
            hsh[nums[i]]++;

        int ans = -1, len = 0;

        for (int i = 0; i < hsh.size(); i += 2)
            if (hsh[i] > len)
                len = hsh[i], ans = i;

        return ans;
    }
};
// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        vector<bool> hsh(10002, false);
        for (int i = 0; i < nums.size(); i++)
            hsh[nums[i]] = true;

        for (int i = 0; i < hsh.size(); i++)
            if (hsh[i] == false)
                return i;

        return 0;
    }
};
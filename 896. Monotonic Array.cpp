// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        if (nums.size() < 3)
            return true;

        vector<int> newnums;
        newnums.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                continue;
            newnums.push_back(nums[i]);
        }

        if (newnums.size() < 3)
            return true;

        for (int i = 1; i < newnums.size() - 1; i++)
        {
            if (newnums[i] > newnums[i - 1] && newnums[i] > newnums[i + 1])
                return false;
            if (newnums[i] < newnums[i - 1] && newnums[i] < newnums[i + 1])
                return false;
        }
        return true;
    }
};
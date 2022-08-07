// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int len = inf;
        int i = 0, j = 0, currSum = 0;

        while (j < nums.size())
        {
            currSum += nums[j];

            if (currSum >= target)
            {
                len = min(len, j - i + 1);
                currSum -= nums[i], i++;
            }
            j++;
        }
        return (len == inf ? 0 : len);
    }
};
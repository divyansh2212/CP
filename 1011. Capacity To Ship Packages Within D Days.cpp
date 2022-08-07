// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    bool check(vector<int> &weights, int days, int wt)
    {
        int currDay = 1, currSum = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            currSum += weights[i];
            if (currSum > wt)
            {
                currDay++, currSum = weights[i];
                if (currDay > days)
                    return false;
            }
        }
        return true;
    }

public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int lo = *max_element(weights.begin(), weights.end()), hi = accumulate(weights.begin(), weights.end(), 0), mid, ans = hi;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (check(weights, days, mid))
                hi = mid - 1, ans = mid;
            else
                lo = mid + 1;
        }
        return ans;
    }
};
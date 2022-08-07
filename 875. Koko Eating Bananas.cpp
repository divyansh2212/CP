// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    bool check(vector<int> &piles, int h, int speed)
    {
        ll currHrs = 0;
        for (int i = 0; i < piles.size(); i++)
            currHrs += ceil((piles[i] * 1.0) / speed);

        return currHrs <= h;
    }

public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int lo = 1, hi = *max_element(piles.begin(), piles.end()), mid, ans = hi;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (check(piles, h, mid))
                ans = mid, hi = mid - 1;
            else
                lo = mid + 1;
        }

        return ans;
    }
};
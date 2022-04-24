// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        ll lo = 1, hi = num, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (mid * mid == num)
                return true;
            if (mid * mid > num)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return false;
    }
};
// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;

        ll s = 1, e = x, mid;

        while (s <= e)
        {
            mid = s + (e - s) / 2;

            if (mid * mid == x)
                return mid;

            if (mid * mid > x)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return e;
    }
};
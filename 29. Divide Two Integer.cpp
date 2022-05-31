// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        ll quotient = (dividend * 1LL) / divisor;
        if (quotient > INT_MAX)
            return INT_MAX;
        if (quotient < INT_MIN)
            return INT_MIN;

        return quotient;
    }
};
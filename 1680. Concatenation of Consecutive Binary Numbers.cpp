// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
const int mod = 1e9 + 7;

class Solution
{

public:
    int concatenatedBinary(int n)
    {
        ll ans = 0;

        int i = 1;

        while (i <= n)
        {
            int bits = log2(i) + 1;
            ans = (((ans << bits) % mod) + i) % mod;
            i++;
        }

        return (int)ans;
    }
};
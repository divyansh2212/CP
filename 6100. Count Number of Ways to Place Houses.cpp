// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

class Solution
{
public:
    ll solve(int x)
    {
        if (x == 1)
            return 4;

        ll cntB = 1, cntS = 1, pcntB, pcntS;

        for (ll i = 2; i <= x; i++)
        {
            pcntB = cntB;
            pcntS = cntS;
            cntS = (pcntB + pcntS) % M;
            cntB = pcntS;
        }

        ll ans = cntS + cntB;

        return (ans * ans) % M;
    }

    int countHousePlacements(int n)
    {
        ll ans = solve(n);
        return (int)(ans % M);
    }
};
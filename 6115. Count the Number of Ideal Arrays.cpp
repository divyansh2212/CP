// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

class Solution
{

    ll f(int &n, int prev, int idx, int &maxValue, unordered_map<int, unordered_map<int, ll>> &mp)
    {
        if (idx == n)
            return 1;

        if (mp[idx][prev])
            return mp[idx][prev];

        ll cost = 0;
        for (int i = max(prev, 1); i <= maxValue; i++)
            if (prev == 0 || i % prev == 0)
                cost += f(n, i, idx + 1, maxValue, mp);

        return mp[idx][prev] = (cost % M);
    }

public:
    int idealArrays(int n, int maxValue)
    {
        unordered_map<int, unordered_map<int, ll>> mp;
        return f(n, 0, 0, maxValue, mp);
    }
};
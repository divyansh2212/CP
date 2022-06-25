#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

class Solution
{
public:
    ll f(int idx, int prev, int prevtoprev, vector<vector<vector<int>>> &dp)
    {
        if (idx < 0)
            return 1;
        if (dp[idx][prev][prevtoprev] != -1)
            return dp[idx][prev][prevtoprev];

        ll ans = 0;
        for (int i = 1; i < 7; i++)
        {
            if (prev == 0 || (__gcd(i, prev) == 1 && i != prev && i != prevtoprev))
            {
                ans += f(idx - 1, i, prev, dp);
                ans = (ans % M);
            }
        }
        return dp[idx][prev][prevtoprev] = (ans % M);
    }

    int distinctSequences(int n)
    {
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(7, vector<int>(7, -1)));
        ll ans = f(n - 1, 0, 0, dp);
        return (int)(ans % M);
    }
};
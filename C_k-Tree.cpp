// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

ll f(int n, int k, int d, bool flag, vector<vector<ll>> &dp)
{
    if (n == 0 && flag)
        return 1;
    if (n == 0)
        return 0;
    if (dp[n][flag] != -1)
        return dp[n][flag];

    ll ways = 0;
    for (int i = 1; i < k + 1; i++)
    {
        if (n - i >= 0)
            ways += f(n - i, k, d, (flag | (i >= d)), dp);
    }
    return dp[n][flag] = (ways % M);
}

int main()
{
    int n, k, d;
    cin >> n >> k >> d;

    vector<vector<ll>> dp(n + 1, vector<ll>(2, -1));
    cout << f(n, k, d, false, dp);
    return 0;
}
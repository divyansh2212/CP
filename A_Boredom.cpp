#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }

    vector<ll> dp(100010, 0);
    dp[1] = m[1];

    for (ll i = 2; i <= 1e5; i++)
        dp[i] = max(dp[i - 1], (i * m[i]) + dp[i - 2]);

    cout << dp[100000];

    return 0;
}
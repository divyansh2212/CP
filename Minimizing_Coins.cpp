// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

ll f(vector<int> &coins, ll x, vector<ll> &dp)
{
    if (x == 0)
        return 0;
    if (x < 0)
        return 1e8;
    if (dp[x] != -1)
        return dp[x];

    ll mini = 1e8;
    for (int i = 0; i < coins.size(); i++)
        mini = min(mini, 1 + f(coins, x - coins[i], dp));

    return dp[x] = mini;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    vector<ll> dp(x + 1, -1);
    int ans = f(coins, x, dp);
    if (ans >= 1e8)
        ans = -1;
    cout << ans;
}
int main()
{
    solve();
    return 0;
}
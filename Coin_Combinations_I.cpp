// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int f(vector<int> &coins, int x, vector<int> &dp)
{
    if (x == 0)
        return 1;
    if (dp[x] != -1)
        return dp[x];
    ll ans = 0;
    for (int i = 0; i < coins.size(); i++)
        if (x - coins[i] >= 0)
            ans += f(coins, x - coins[i], dp);
    return dp[x] = (ans % mod);
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    vector<int> dp(x + 1, -1);
    cout << f(coins, x, dp);
}
int main()
{
    solve();
    return 0;
}
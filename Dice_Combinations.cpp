// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int f(int sum, vector<ll> &dp)
{
    if (sum == 0)
        return 1;
    if (dp[sum] != -1)
        return dp[sum];
    ll ways = 0;
    for (int i = 1; i <= 6; i++)
        if (sum >= i)
            ways += f(sum - i, dp);
    return dp[sum] = ways % mod;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> dp(n + 1, -1);
    cout << f(n, dp);
}
int main()
{
    solve();
    return 0;
}
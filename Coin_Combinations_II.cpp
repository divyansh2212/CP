// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int f(vector<int> &coins, int x, vector<vector<int>> &dp, int idx)
{
    if (x == 0)
        return 1;
    if (idx == coins.size() - 1)
    {
        if (x % coins[idx] == 0)
            return 1;
        return 0;
    }
    if (dp[x][idx] != -1)
        return dp[x][idx];

    ll ans = 0;
    if (coins[idx] <= x)
        ans += f(coins, x - coins[idx], dp, idx);
    ans += f(coins, x, dp, idx + 1);
    return dp[x][idx] = (ans % mod);
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    vector<vector<int>> dp(n, vector<int>(x + 1, 0));

    for (int i = 0; i < n; i++)
    {
        for (int sum = 0; sum <= x; sum++)
        {
            if (sum == 0)
                dp[i][sum] = 1;
            else
            {
                ll op1 = 0, op2 = 0;
                if (i > 0)
                    op2 = dp[i - 1][sum];
                if (sum >= coins[i])
                    op1 = dp[i][sum - coins[i]];
                dp[i][sum] = (op1 + op2) % mod;
            }
        }
    }

    cout << dp[n - 1][x];
}
int main()
{
    solve();
    return 0;
}
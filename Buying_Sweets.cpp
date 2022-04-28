// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(vector<ll> &cashback, vector<ll> &cost, ll idx, ll moneyLeft, vector<vector<ll>> &dp)
{
    if (idx < 0)
        return 0;
    if (dp[idx][moneyLeft] != -1)
        return dp[idx][moneyLeft];

    ll way1 = 0, way2 = 0;

    // not buy
    way1 = f(cashback, cost, idx - 1, moneyLeft, dp);

    // buy
    if (moneyLeft >= cost[idx])
        way2 = 1 + f(cashback, cost, idx, moneyLeft - cost[idx] + cashback[idx], dp);

    return dp[idx][moneyLeft] = max(way1, way2);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, r;
        cin >> n >> r;

        vector<ll> cost(n), cashback(n);

        for (ll i = 0; i < n; i++)
            cin >> cost[i];

        for (ll i = 0; i < n; i++)
            cin >> cashback[i];

        vector<pair<ll, ll>> fnlCost;

        for (ll i = 0; i < n; i++)
            fnlCost.push_back({cost[i] - cashback[i], cashback[i]});

        ll ans = 0;
        sort(fnlCost.begin(), fnlCost.end());

        for (auto &c : fnlCost)
        {
            ll ecost = c.first, csback = c.second, cst = ecost + csback;

            if (cst >= r)
                continue;;

            
        }

        cout << ans << endl;
    }
    return 0;
}
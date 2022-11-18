// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

ll f(ll &a, ll &b, ll &l, ll &r, ll &x, ll curr, map<ll, ll> &mp)
{
    if (curr == b)
        return 0;

    if (mp.find(curr) != mp.end())
        return mp[curr];

    ll ways = inf;
    for (ll i = l; i < r + 1; i++)
        if (abs(curr - i) >= x && mp.find(i) == mp.end())
            ways = min(ways, 1 + f(a, b, l, r, x, i, mp));

    return mp[curr] = ways;
}

void solve()
{
    ll l, r, x;
    cin >> l >> r >> x;

    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }

    if (abs(a - b) >= x)
    {
        cout << 1 << "\n";
        return;
    }

    vector<ll> arr1 = {a, l, b};
    vector<ll> arr2 = {a, r, b};
    vector<ll> arr3 = {a, l, r, b};
    vector<ll> arr4 = {a, r, l, b};

    bool flag = true;
    for (int i = 1; i < 3 && flag; i++)
        if (abs(arr1[i] - arr1[i - 1]) < x)
            flag = false;
    if (flag)
    {
        cout << 2 << "\n";
        return;
    }
    flag = true;
    for (int i = 1; i < 3 && flag; i++)
        if (abs(arr2[i] - arr2[i - 1]) < x)
            flag = false;
    if (flag)
    {
        cout << 2 << "\n";
        return;
    }
    flag = true;
    for (int i = 1; i < 4 && flag; i++)
        if (abs(arr3[i] - arr3[i - 1]) < x)
            flag = false;
    if (flag)
    {
        cout << 3 << "\n";
        return;
    }
    flag = true;
    for (int i = 1; i < 4 && flag; i++)
        if (abs(arr4[i] - arr4[i - 1]) < x)
            flag = false;
    if (flag)
    {
        cout << 3 << "\n";
        return;
    }
    cout << -1 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
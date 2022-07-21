// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const ll M = 1e9 + 7;

ll f(vector<ll> &h, int idx, int flag)
{
    if (idx >= h.size() - 1)
        return 0;

    ll cost = 0;

    // first
    if (h[idx] <= h[idx + 1] || h[idx] <= h[idx - 1])
        cost = max(h[idx + 1], h[idx - 1]) - h[idx] + 1;
    ll to_add = f(h, idx + 2, flag);

    // second
    if (flag)
        to_add = min(to_add, f(h, idx + 3, 0));

    return cost + to_add;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> h(n);
    for (ll i = 0; i < n; i++)
        cin >> h[i];

    ll ans = 0;

    for (int i = 1; i < n - 1; i += 2)
        ans += max(0LL, max(h[i + 1], h[i - 1]) - h[i] + 1);

    if (n % 2)
    {
        cout << ans << endl;
        return;
    }

    ll temp = ans;

    for (int i = n - 2; i >= 1; i -= 2)
    {
        temp -= max(0LL, max(h[i], h[i - 2]) - h[i - 1] + 1);
        temp += max(0LL, max(h[i + 1], h[i - 1]) - h[i] + 1);
        ans = min(ans, temp);
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
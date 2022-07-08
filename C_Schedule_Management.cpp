// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll> &hsh, ll mid)
{
    ll extra = 0, free = 0;
    for (ll i = 1; i < hsh.size(); i++)
    {
        if (hsh[i] > mid)
            extra += hsh[i] - mid;
        else
            free += (mid - hsh[i]) / 2;
    }
    if(free >= extra)
    return true;
    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(m);
        vector<ll> hsh(n + 1, 0);
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
            hsh[a[i]]++;
        }

        ll lo = INT_MAX, hi = INT_MIN;
        for (ll i = 1; i < n + 1; i++)
        {
            lo = min(lo, hsh[i]);
            hi = max(hi, hsh[i]);
        }

        ll ans;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;

            if (check(hsh, mid))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }

        cout << ans << endl;
    }
    return 0;
}
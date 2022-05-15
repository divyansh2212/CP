// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> arr(n);
        ll mx = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }

        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, mx + arr[i] + ((mx - arr[i]) % m));
            if (arr[i] - mx < 0)
            {
                ll to_sub = arr[i] - mx;
                to_sub = -1 * to_sub;
                ll to_mul = to_sub / m;
                to_sub = (-1 * to_sub) + (m * (to_mul + 1));
                ans = max(ans, mx + arr[i] + (to_sub % m));
            }
        }

        cout << ans << endl;
    }
    return 0;
}
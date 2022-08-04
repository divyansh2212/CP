// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, x, y, mx = -1;
    cin >> n >> x >> y;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    if (y >= x)
    {
        ll ans = ceil((mx * 1.0) / y);
        cout << ans << endl;
    }

    else
    {
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i] -= (ans * y);
            if (arr[i] > 0)
                ans += ceil((arr[i] * 1.0) / x);
        }
        cout << ans << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
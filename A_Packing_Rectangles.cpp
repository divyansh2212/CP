// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll ans = max(w, h) * n;
    ll lo = 1, hi = ans, mid;

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;

        ll f = mid / h, s = mid / w;

        if (f >= 1e9 || s >= 1e9)
        {
            hi = mid - 1;
            ans = mid;
            continue;
        }

        if (f * s >= n)
            ans = mid, hi = mid - 1;
        else
            lo = mid + 1;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}
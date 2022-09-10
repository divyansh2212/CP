// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool check(ll mid, vector<ll> &h)
{
    vector<ll> temp = h;
    int n = h.size();
    for (int i = n - 1; i >= 2; i--)
    {
        if (temp[i] < mid)
            return false;
        ll transferable = min(h[i], temp[i] - mid);
        ll transfered = transferable / 3;
        temp[i] -= (3 * transfered);
        temp[i - 1] += transfered;
        temp[i - 2] += (2 * transfered);
    }
    if (temp[0] < mid || temp[1] < mid)
        return false;
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> h(n);
    ll lo = inf, hi = -1, mid;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        lo = min(lo, h[i]);
        hi = max(hi, h[i]);
    }

    ll ans = lo;

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (check(mid, h))
            lo = mid + 1, ans = mid;
        else
            hi = mid - 1;
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
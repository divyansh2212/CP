// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool check(ll mid, vector<ll> &delivered, vector<ll> &pickup)
{
    ll pickUpRate = 0, delirate = 0;

    for (int i = 0; i < pickup.size(); i++)
    {
        if (delivered[i] <= mid)
            delirate = max(delirate, delivered[i]);
        else
            pickUpRate += pickup[i];
    }

    return (max(pickUpRate, delirate) <= mid);
}

void solve()
{
    ll n, lo = inf, hi = -1, mid, ans;
    cin >> n;

    vector<ll> delivered(n), pickup(n);
    for (int i = 0; i < n; i++)
    {
        cin >> delivered[i];
        hi = max(hi, delivered[i]);
    }
    lo = 1, ans = hi;

    for (int i = 0; i < n; i++)
        cin >> pickup[i];

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (check(mid, delivered, pickup))
            hi = mid - 1, ans = mid;
        else
            lo = mid + 1;
    }

    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf ll_MAX

bool check(vector<ll> &arr, ll mid, ll &products)
{
    ll n = arr.size(), curr = 0;
    for (ll i = 0; i < n; i++)
    {
        curr += (mid / arr[i]);
        if (curr >= products)
            break;
    }
    return (curr >= products);
}

void solve()
{
    ll n, t;
    cin >> n >> t;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    ll lo = arr[0], hi = arr[n - 1] * t, mid, ans = 1e15;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (check(arr, mid, t))
            hi = mid - 1, ans = mid;
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
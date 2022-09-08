// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

ll isPossible(ll n, ll mid)
{
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll numbers = ceil((mid * 1.0) / i) - 1;
        if (numbers > 0)
            cnt += min(numbers, n);
    }

    return cnt;
}

void solve()
{
    ll n;
    cin >> n;

    ll lo = 1, hi = n * n, mid, to_check = (n * n) / 2, ans;

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;

        if (isPossible(n, mid) > to_check)
            hi = mid - 1;
        else
            ans = mid, lo = mid + 1;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}
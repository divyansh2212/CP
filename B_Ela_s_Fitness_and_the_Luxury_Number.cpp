// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll l, r;
    cin >> l >> r;

    ll ans = 0;
    for (ll i = l; i < r + 1; i++)
    {
        ll sqt = sqrt(i);
        if (i % sqt == 0)
            ans++;
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
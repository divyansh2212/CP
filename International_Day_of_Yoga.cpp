#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll l, b;
    cin >> l >> b;

    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;

        ans += max((x / l) * (y / b), (x / b) * (y / l));
    }

    cout << ans << endl;
    return 0;
}
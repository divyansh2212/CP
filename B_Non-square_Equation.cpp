// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;

    ll ans = 1e18;

    for (ll i = 1; i <= 90; i++)
    {
        ll sqt = sqrt((i * i) + (4 * n));
        if ((sqt * sqt) != (i * i) + (4 * n))
            continue;
        sqt -= i;
        if (sqt % 2)
            continue;

        // ans = min(ans, sqt / 2);
        cout << sqt << endl;
    }

    if (ans == 1e18)
        ans = -1;

    // cout << ans;
}
int main()
{
    solve();
    return 0;
}
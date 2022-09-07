// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int p, q, r;
    cin >> p >> q >> r;

    ll ans = 1;
    for (int i = 0; i < 21; i++)
    {
        int cnt = 0;
        if (((p & (1 << i)) != 0))
            cnt++;
        if (((q & (1 << i)) != 0))
            cnt++;
        if (((r & (1 << i)) != 0))
            cnt++;
        if (cnt == 1)
        {
            cout << 0 << endl;
            return;
        }
        if (cnt == 3)
            ans *= 4;
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
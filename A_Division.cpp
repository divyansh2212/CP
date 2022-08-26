// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll p, q;
    cin >> p >> q;

    // p % x == 0 && x % q != 0

    ll ans = p;

    if (p % q == 0)
    {
        ans = 1;
        for (ll i = 1; i * i <= q; i++)
        {
            if (q % i == 0)
            {
                ll x = p;
                while (i != 1 && x % i == 0)
                {
                    x /= i;

                    if (x % q)
                        ans = max(ans, x);
                }

                x = p;
                while (x % (q / i) == 0)
                {
                    x /= (q / i);

                    if (x % q)
                        ans = max(ans, x);
                }
            }
        }
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
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll product = a * b;

    if ((c * d) % product == 0)
    {
        cout << c << " " << d << "\n";
        return;
    }

    for (ll i = a + 1; i <= c; i++)
    {
        ll x = i;
        if (product % x == 0)
        {
            ll no = product / x;
            for (ll j = no; j <= d; j += no)
            {
                if (j > b)
                {
                    cout << x << " " << j << "\n";
                    return;
                }
            }
        }
    }

    for (ll i = b + 1; i <= d; i++)
    {
        ll x = i;
        if (product % x == 0)
        {
            ll no = product / x;
            for (ll j = no; j <= c; j += no)
            {
                if (j > a)
                {
                    cout << x << " " << j << "\n";
                    return;
                }
            }
        }
    }

    cout << "-1 -1\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
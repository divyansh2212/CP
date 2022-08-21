// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll binExp(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % m;
        a = (a * a) % m;
        b = (b >> 1);
    }
    return ans;
}

ll phi(ll n)
{
    ll ans = n;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n = n / i;
            ans -= (ans / i);
        }
    }

    if (n > 1)
        ans -= (ans / n);

    return ans;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    cout << binExp(a, binExp(b, c, mod - 1), mod) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
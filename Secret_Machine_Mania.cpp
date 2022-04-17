// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, c;
        cin >> x >> c;

        if (c == 1)
        {
            cout << 1 << endl;
            continue;
        }

        vector<ll> factors;
        for (ll i = 1; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                factors.push_back(i);
                if (x / i != i)
                    factors.push_back(x / i);
            }
        }

        ll ans = x;

        for (ll f : factors)
        {
            ll b = pow(f, c);
            ans = min(ans, lcm(b, x) / gcd(b, x));
        }

        cout << ans << endl;
    }
    return 0;
}
// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<ll> is_prime(1000000, true);
    is_prime[0] = false, is_prime[1] = false;

    for (ll i = 2; i < 1e6; i++)
        if (is_prime[i])
            for (ll j = 2 * i; j < 1e6; j += i)
                is_prime[j] = false;

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;

        for (ll i = 1; i < min(n, 10000 * 1LL); i++)
        {
            ll a = i, b = n - i;
            ll ans = max(ans, ((a * b) / __gcd(a, b)) - __gcd(a, b));
        }

        cout << ans << endl;
    }
    return 0;
}
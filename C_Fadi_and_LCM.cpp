// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll minOfMax = 1e16;

    ll x = 1, y = n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll a = i, b = n / i;
            ll lcm = (a * b) / __gcd(a, b);
            ll shortnum = n / lcm;
            a *= shortnum, b *= shortnum;

            if (max(a, b) < minOfMax)
                x = a, y = b, minOfMax = max(a, b);
        }
    }

    cout << x << " " << y;

    return 0;
}
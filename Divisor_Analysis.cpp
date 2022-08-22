// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

ll binExp(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b = (b >> 1);
    }
    return ans;
}

ll geometricSum(ll a, ll b)
{
    ll numerator = (binExp(a, b + 1) - 1 + mod) % mod;
    ll denominator = binExp(a - 1, mod - 2);
    return (numerator * denominator) % mod;
}

void solve()
{
    int n;
    cin >> n;

    ll product = 1, numberOfDivisors = 1, sum = 1;
    while (n--)
    {
        ll p, e;
        cin >> p >> e;

        numberOfDivisors = (numberOfDivisors * (e + 1)) % mod;
        sum = (sum * geometricSum(p, e)) % mod;
    }

    cout << numberOfDivisors << " " << sum << " " << product;
}
int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
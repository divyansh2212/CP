// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << phi(n) << endl;
    }
    return 0;
}
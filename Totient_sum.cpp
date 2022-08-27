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
                n /= i;
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

    vector<int> etfs(1e5 + 1, 0);
    for (int i = 1; i < 1e5 + 1; i++)
        etfs[i] = phi(i);

    while (t--)
    {
        int n;
        cin >> n;

        ll totolSum = 0;
        for (int i = 1; i <= n; i++)
            totolSum += etfs[i];

        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {
            ans += (totolSum * etfs[i]) % mod;
            ans = (ans % mod);
            totolSum -= etfs[i];
        }

        cout << ans << endl;
    }
    return 0;
}
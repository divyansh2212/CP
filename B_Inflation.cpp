// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<ll> prefix(n, 0);
        prefix[0] = p[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + p[i];

        ll ans = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if ((100 * p[i]) >= (k * (prefix[i - 1] + ans)))
            {
                ll x = (100 * p[i] - (prefix[i - 1] + ans) * k + k - 1) / k;
                ans += x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
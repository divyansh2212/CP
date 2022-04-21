// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> weights(n);
        for (ll i = 0; i < n; i++)
            cin >> weights[i];

        vector<ll> forward_sum(n);
        map<ll, ll> m;
        forward_sum[0] = weights[0];
        m[weights[0]] = 0;
        for (ll i = 1; i < n; i++)
        {
            forward_sum[i] = forward_sum[i - 1] + weights[i];
            m[forward_sum[i]] = i;
        }

        ll ans = 0;
        vector<ll> backward_sum(n);
        backward_sum[n - 1] = weights[n - 1];
        for (ll i = n - 1; i >= 0; i--)
        {
            if (i != n - 1)
                backward_sum[i] = backward_sum[i + 1] + weights[i];
            auto it = m.find(backward_sum[i]);
            if (it != m.end())
            {
                if ((i != n - 1 && it->second != 0) || (i != 0 && it->second != n - 1))
                    ans = max(ans, n - i + it->second + 1);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
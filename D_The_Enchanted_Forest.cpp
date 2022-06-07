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

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> prefix(n + 1, 0);

        for (ll i = 1; i <= n; i++)
            prefix[i] = prefix[i - 1] + arr[i - 1];

        ll ans = 0;
        if (k <= n)
        {
            for (ll i = k; i <= n; i++)
                ans = max(ans, prefix[i] - prefix[i - k]);
            ans += (k - 1) * k / 2;
        }

        else
        {
            ans = prefix[n];
            ans += n * k - (n) * (n + 1) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
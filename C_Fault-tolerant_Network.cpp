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

        vector<ll> a(n), b(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
            cin >> b[i];

        ll ans = abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]);
        ans = min(ans, abs(a[0] - b[n - 1]) + abs(b[0] - a[n - 1]));

        ll ansA1 = 1e18, ansA2 = 1e18;
        ll ansB1 = 1e18, ansB2 = 1e18;
        for (ll i = 0; i < n; i++)
        {
            ansB1 = min(ansB1, abs(a[i] - b[0]));
            ansB2 = min(ansB2, abs(a[i] - b[n - 1]));
        }

        for (ll i = 0; i < n; i++)
        {
            ansA1 = min(ansA1, abs(b[i] - a[0]));
            ansA2 = min(ansA2, abs(b[i] - a[n - 1]));
        }
        ans = min(ans, ansA1 + ansA2 + ansB1 + ansB2);
        ans = min(ans, abs(a[n - 1] - b[n - 1]) + ansA1 + ansB1);
        ans = min(ans, abs(a[0] - b[0]) + ansA2 + ansB2);
        ans = min(ans, abs(a[0] - b[n - 1]) + ansA2 + ansB1);
        ans = min(ans, abs(b[0] - a[n - 1]) + ansB2 + ansA1);

        cout << ans << endl;
    }
    return 0;
}
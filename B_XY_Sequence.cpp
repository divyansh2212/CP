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
        ll n, B, x, y;
        cin >> n >> B >> x >> y;

        vector<ll> seq(n + 1);
        seq[0] = 0;

        for (int i = 1; i < n + 1; i++)
        {
            ll f = seq[i - 1] + x, s = seq[i - 1] - y;
            seq[i] = INT_MIN;
            if (f <= B)
                seq[i] = f;
            if (s <= B)
                seq[i] = max(seq[i], s);
        }

        ll ans = 0;
        for (int i = 0; i < n + 1; i++)
            ans += seq[i];

        cout << ans << endl;
    }
    return 0;
}
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
        ll m;
        cin >> m;

        vector<vector<ll>> arr(2, vector<ll>(m));
        vector<ll> prefix1(m, 0), prefix2(m, 0);
        for (ll i = 0; i < 2; i++)
            for (ll j = 0; j < m; j++)
                cin >> arr[i][j];

        prefix1[0] = arr[0][0];
        prefix2[0] = arr[1][0];

        for (ll i = 1; i < m; i++)
        {
            prefix1[i] = prefix1[i - 1] + arr[0][i];
            prefix2[i] = prefix2[i - 1] + arr[1][i];
        }

        ll ans = INT_MAX;
        for (ll i = 0; i < m; i++)
        {
            ll curr = INT_MIN;
            if (i == 0)
                curr = max(curr, prefix1[m - 1] - prefix1[0]);
            else if (i == m - 1)
                curr = max(curr, prefix2[i - 1]);
            else
            {
                curr = max(curr, prefix1[m - 1] - prefix1[i]);
                curr = max(curr, prefix2[i - 1]);
            }
            ans = min(ans, curr);
        }
        cout << ans << endl;
    }
    return 0;
}
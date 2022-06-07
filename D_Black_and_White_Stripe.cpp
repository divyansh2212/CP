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

        vector<ll> letters(n);
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == 'B')
                letters[i] = 0;
            else
                letters[i] = 1;
        }

        vector<ll> prefixSum(n + 1, 0);
        for (ll i = 1; i < n + 1; i++)
            prefixSum[i] = prefixSum[i - 1] + letters[i - 1];

        ll ans = INT_MAX;
        for (ll i = k; i < n + 1; i++)
            ans = min(ans, prefixSum[i] - prefixSum[i - k]);

        cout << ans << endl;
    }
    return 0;
}
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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        if (k >= n - 1)
            cout << *max_element(arr.begin(), arr.end()) << endl;

        else
        {
            vector<pair<ll, ll>> pairs;
            pairs.push_back({arr[0], arr[1]});
            pairs.push_back({arr[n - 1], arr[n - 2]});

            for (ll i = 1; i < n - 1; i++)
            {
                ll to_insert = max(arr[i - 1], arr[i + 1]);
                pairs.push_back({arr[i], to_insert});
            }

            sort(pairs.begin(), pairs.end());
            reverse(pairs.begin(), pairs.end());

            ll ans = *min_element(arr.begin(), arr.end());

            while (k--)
            {
                pair<ll, ll> last = pairs[pairs.size() - 1];
                pairs.pop_back();
            }

            pair<ll, ll> last = pairs[pairs.size() - 1];
            ans = last.first;

            cout << ans << endl;
        }
    }
    return 0;
}
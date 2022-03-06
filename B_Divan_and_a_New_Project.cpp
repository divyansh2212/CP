#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool sortbysec(const pair<ll, pair<ll, ll>> &a, const pair<ll, pair<ll, ll>> &b)
{
    return (a.second < b.second);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<pair<ll, pair<ll, ll>>> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second.first = i;
        }
        sort(arr.begin(), arr.end());

        ll ans = 0;
        reverse(arr.begin(), arr.end());
        ll cnt = 1;
        for (ll i = 0; i < n; i++)
        {
            ll last = arr[i].first;
            if (i % 2 == 0)
                arr[i].second.second = -1 * cnt;

            else
            {
                arr[i].second.second = cnt;
                cnt++;
            }
            ans += 2 * abs(arr[i].second.second) * arr[i].first;
        }
        reverse(arr.begin(), arr.end());

        cout << ans << endl;
        cout << 0 << " ";

        sort(arr.begin(), arr.end(), sortbysec);

        for (ll i = 0; i < arr.size(); i++)
            cout << arr[i].second.second << " ";

        cout << endl;
    }
    return 0;
}
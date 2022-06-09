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

        vector<ll> a(n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i] / k;
            a[i] = a[i] % k;
        }

        sort(a.begin(), a.end());

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            while (a[i] + a[j] < k && i < j)
                i++;
            if (i == j)
                break;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}
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

        vector<ll> arr(n), hsh(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        for (ll i = 0; i < n - 1; i++)
        {
            if ((arr[i] + arr[i + 1]) % 2)
            {
                hsh[i] = 1;
                hsh[i + 1] = 1;
            }
        }

        ll ans = 0, curr = 0;

        for (int i = 0; i < n; i++)
        {
            if (hsh[i])
                curr++;
            else
            {
                if (curr > 2)
                    ans += curr - 2;
                else
                    ans += curr;
                curr = 0;
            }
        }
        if (curr > 2)
            ans += curr - 2;
        else
            ans += curr;

        cout << ans << endl;
    }
    return 0;
}
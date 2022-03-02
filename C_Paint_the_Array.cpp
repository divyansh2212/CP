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

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll gcd1 = arr[0], gcd2 = arr[1];

        for (ll i = 2; i < n; i += 2)
            gcd1 = min(gcd1, __gcd(arr[i], arr[0]));

        for (ll i = 3; i < n; i += 2)
            gcd2 = min(gcd2, __gcd(arr[i], arr[1]));

        if (gcd1 != 1)
        {
            for (ll i = 1; i < n; i += 2)
                if (arr[i] % gcd1 == 0)
                    gcd1 = 1;
        }
        if (gcd2 != 1)
        {
            for (ll i = 0; i < n; i += 2)
                if (arr[i] % gcd2 == 0)
                    gcd2 = 1;
        }
        if (gcd1 == 1 && gcd2 == 1)
            cout << 0 << endl;
        else
            cout << max(gcd1, gcd2) << endl;
    }
    return 0;
}
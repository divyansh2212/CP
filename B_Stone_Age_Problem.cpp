// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, q;
    cin >> n >> q;

    unordered_map<ll, ll> arr;
    ll sum = 0;
    for (ll i = 1; i < n + 1; i++)
    {
        ll x;
        cin >> x;
        arr[i] = x;
        sum += x;
    }

    ll val = -1;
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll i, x;
            cin >> i >> x;

            if (arr.count(i) == 0)
                arr[i] = val;

            sum -= arr[i];
            sum += x;
            arr[i] = x;
        }
        else
        {
            ll x;
            cin >> x;
            sum = n * x;
            val = x;
            arr.clear();
        }
        cout << sum << endl;
    }

    return 0;
}
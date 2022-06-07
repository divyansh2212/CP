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
        unordered_map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i] % k]++;
        }
    }
    return 0;
}
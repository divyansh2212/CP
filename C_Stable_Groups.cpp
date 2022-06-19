// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        a.push_back(in);
    }

    sort(a.begin(), a.end());

    ll ans = 1;
    vector<ll> merges;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > x)
        {
            ans++;
            if (((a[i] - a[i - 1]) % x == 0) && k >= ((a[i] - a[i - 1]) / x) - 1)
                merges.push_back(((a[i] - a[i - 1]) / x) - 1);

            else if (((a[i] - a[i - 1]) % x) && k >= ((a[i] - a[i - 1]) / x))
                merges.push_back(((a[i] - a[i - 1]) / x));
        }
    }

    sort(merges.begin(), merges.end());

    for (ll i = 0; i < merges.size(); i++)
    {
        if (merges[i] <= k)
            k -= merges[i], ans--;
        else
            break;
    }

    cout << ans << endl;

    return 0;
}
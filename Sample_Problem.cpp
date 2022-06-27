// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int k = 0;
    while (t--)
    {
        k++;
        ll n, m;
        cin >> n >> m;

        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
        }

        cout << "Case #" << k << ": " << sum - (m * (sum / m)) << endl;
    }
    return 0;
}
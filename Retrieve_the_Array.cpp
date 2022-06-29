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
        ll n;
        cin >> n;

        vector<ll> b(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            sum += b[i];
        }

        ll Asum = sum / (n + 1);

        for (ll i = 0; i < n; i++)
            cout << b[i] - Asum << " ";

        cout << endl;
    }
    return 0;
}
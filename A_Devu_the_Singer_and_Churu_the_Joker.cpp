// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, d;
    cin >> n >> d;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll reqdtime = arr[0];
    for (ll i = 1; i < n; i++)
        reqdtime += arr[i] + 10;

    if (reqdtime > d)
        cout << -1 << endl;

    else
        cout << ((n - 1) * 2) + ((d - reqdtime) / 5);

    return 0;
}
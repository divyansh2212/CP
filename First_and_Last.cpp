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

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = arr[0] + arr[n - 1];
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, arr[i] + arr[i + 1]);

        cout << ans << endl;
    }
    return 0;
}
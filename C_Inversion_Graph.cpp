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

        set<ll> s;
        s.insert(0);
        for (ll i = 1; i <= n; i++)
            s.insert(-1 * i);

        ll target = n, ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            s.erase(-1 * arr[i]);
            if (target == arr[i])
            {
                target = -1 * (*s.begin());
                if (-1 * (*s.begin()) == i)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
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

        if (n == 3)
        {
            if (arr[1] % 2)
                cout << -1 << endl;
            else
                cout << arr[1] / 2 << endl;
        }
        else
        {
            bool flag = true;
            ll ans = 0;
            for (ll i = 1; i < n - 1; i++)
            {
                if (arr[i] > 1)
                    flag = false;
                if (arr[i] % 2)
                    ans += (arr[i] + 1) / 2;
                else
                    ans += arr[i] / 2;
            }
            if (flag)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }
    return 0;
}
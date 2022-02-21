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
        vector<ll> hsh(32, 0);
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[j];
            sum += arr[j];
            for (ll i = 0; i < 32; i++)
            {
                if ((arr[j] & (1 << i)) != 0)
                    hsh[i]++;
            }
        }

        ll ansor = 0;
        for (ll i = 0; i < 32; i++)
        {
            if (hsh[i])
                ansor += (1 << i);
        }

        cout << min(sum, ansor) << endl;
    }
    return 0;
}
// Jai Shree Babosa!

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

        vector<ll> input(n + 1);
        for (ll j = 0; j < n + 1; j++)
            cin >> input[j];

        vector<ll> hsh(32, 0);
        vector<ll> arr(n, 0);
        int curr_idx = 0;
        for (ll j = 0; j < n + 1; j++)
        {
            if (input[j] == 0)
                continue;
            for (ll i = 0; i < 32; i++)
            {
                if (hsh[i])
                    continue;
                ll x = input[j];
                if (x & (1 << i))
                    hsh[i] = 1;
            }
        }

        for (int i = 0; i < 32; i++)
        {
            
            if (hsh[i])
            {
                arr[curr_idx] = ((1 << i));
                curr_idx++;
            }
        }

        for (ll i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
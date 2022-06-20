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

        vector<ll> b(n + 2);
        unordered_map<ll, int> mp;
        for (ll i = 0; i < n + 2; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }

        sort(b.begin(), b.end());

        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += b[i];

        ll x = -1;
        if (sum == b[n])
        {
            x = b[n + 1];
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
            continue;
        }

        else if (b[n + 1] < sum + b[n])
        {
            if (mp.find(sum + b[n] - b[n + 1]) != mp.end())
            {
                if (sum + b[n] - b[n + 1] == b[n + 1])
                {
                    if (mp[b[n + 1]] > 1)
                        x = sum + b[n] - b[n + 1];
                }
                else
                    x = sum + b[n] - b[n + 1];
            }
        }

        if (x == -1)
            cout << x << endl;

        else
        {
            bool flag = true;
            for (int i = 0; i < n + 1; i++)
            {
                if (x == b[i] && flag)
                    flag = false;
                else
                    cout << b[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
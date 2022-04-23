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

        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        bool flag = true;

        ll i = 0;
        while (i < 0)
        {
            if (a == b)
                break;

            if (a[i] == b[i])
            {
                i++;
                continue;
            }

            vector<ll> prev_a = a;
            for (ll j = i + 2; j < n; j++)
            {
                if (a[j] == a[i])
                {
                    for (ll k = i; k < j; k++)
                        a[k] = a[k + 1];
                    break;
                }
            }
            if (a == prev_a)
            {
                flag = false;
                break;
            }
            if (a[i] == b[i])
                i++;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
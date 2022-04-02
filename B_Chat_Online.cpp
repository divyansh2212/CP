// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<bool> same(1e3 + 10, false);
    while (p--)
    {
        ll x, y;
        cin >> x >> y;
        for (ll i = x; i < y + 1; i++)
            same[i] = true;
    }

    set<ll> s;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;

        for (ll i = l; i < r + 1; i++)
        {
            bool flag = false;
            for (ll j = x + i; j < y + 1 + i; j++)
            {
                if (j > 1e3 + 8)
                    break;
                if (same[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                s.insert(i);
        }
    }
    cout << s.size() << endl;

    return 0;
}
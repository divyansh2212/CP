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
        ll A, H, n;
        cin >> A >> H >> n;

        bool flag = true;
        vector<pair<ll, ll>> pairs(n);
        for (ll i = 0; i < n; i++)
            cin >> pairs[i].first;
        for (ll i = 0; i < n; i++)
            cin >> pairs[i].second;

        sort(pairs.begin(), pairs.end());

        for (ll i = 0; i < n; i++)
        {
            ll attack = pairs[i].first, health = pairs[i].second;
            ll rounds = health / A;
            if (health % A)
                rounds++;
            H -= (rounds * attack);
            if (i < n - 1 && H <= 0)
            {
                flag = false;
                break;
            }
            if (i == n - 1 && H <= 0)
            {
                H += attack;
                if (H <= 0)
                    flag = false;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
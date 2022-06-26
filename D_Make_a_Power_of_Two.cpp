// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(string &s, string &t, ll &x, ll &y)
{
    int lcs = 0, idx1 = 0, idx2 = 0;
    while (idx1 < x && idx2 < y)
    {
        if (s[idx1] == t[idx2])
            lcs++, idx2++;

        idx1++;
    }
    return lcs;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<ll> possibles;
        for (ll i = 1; i <= 2e18; i *= 2)
            possibles.push_back(i);

        ll x = s.length();

        ll ans = x + 1;
        for (ll j = 0; j < possibles.size(); j++)
        {
            string t = to_string(possibles[j]);
            ll y = t.length();
            ll lcs = f(s, t, x, y);

            ans = min(ans, x + y - lcs - lcs);
        }
        cout << ans << endl;
    }
    return 0;
}
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

        string s;
        cin >> s;

        ll ans = 0;
        vector<bool> flag(1001, false);
        vector<pair<ll, ll>> ansp;
        while (1)
        {
            if (is_sorted(s.begin(), s.end()))
                break;
            ans++;
            ll fit = -1;
            for (ll i = 0; i < s.length(); i++)
            {
                if (s[i] == '1')
                {
                    fit = i;
                    break;
                }
            }
            ll sit = fit;
            for (ll i = fit + 1; i < s.length(); i++)
            {
                if (s[i] == '1')
                    sit = i;
                else
                    break;
            }

            if (flag[sit - fit + 1] == false)
            {
                ansp.push_back({fit + 1, sit - fit + 1});
                for (ll i = fit; i < sit + 1; i++)
                    s[i] = '0';
                flag[sit - fit + 1] = true;
            }
            else
            {
                int x = 0;
                while (1)
                {
                    x++;
                    bool done = false;
                    if (sit + x < n)
                    {
                        if (flag[(sit + x) - fit + 1] == false)
                        {
                            ansp.push_back({fit + 1, (sit + x) - fit + 1});
                            for (ll i = fit; i <= sit + x; i++)
                            {
                                if (s[i] == '1')
                                    s[i] == '0';
                                else
                                    s[i] = '1';
                            }
                            done = true;
                            flag[(sit + x) - fit + 1] = true;
                        }
                    }
                    if (done)
                        break;
                    if (sit - x >= fit)
                    {
                        if (flag[(sit - x) - fit + 1] == false)
                        {
                            ansp.push_back({fit + 1, (sit - x) - fit + 1});
                            for (ll i = fit; i <= sit - x; i++)
                            {
                                if (s[i] == '1')
                                    s[i] == '0';
                                else
                                    s[i] = '1';
                            }
                            done = true;
                            flag[(sit - x) - fit + 1] = true;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
        for (ll i = 0; i < ansp.size(); i++)
            cout << ansp[i].first << " " << ansp[i].second << endl;
    }
    return 0;
}
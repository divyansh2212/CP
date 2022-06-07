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
        int n;
        cin >> n;

        vector<ll> s(n), f(s);
        for (ll i = 0; i < n; i++)
            cin >> s[i];

        for (ll i = 0; i < n; i++)
            cin >> f[i];

        vector<ll> ans;
        ans.push_back(f[0] - s[0]);
        ll last_comp = f[0];

        for (int i = 1; i < n; i++)
        {
            if (last_comp <= s[i])
                ans.push_back(f[i] - s[i]);

            else
            {
                ll last = f[i] - last_comp;
                if (last < 0)
                    last = 0;
                ans.push_back(last);
            }

            last_comp = f[i];
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
    return 0;
}
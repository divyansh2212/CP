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
        ll l, r;
        cin >> l >> r;

        vector<ll> ans;
        for (ll i = l; i <= r - 2; i++)
        {
            ll to_find = i ^ (i + 1) ^ (i + 2);
            if (to_find >= l && to_find <= r)
            {
                ans.push_back(i);
                ans.push_back(i + 1);
                ans.push_back(i + 2);
                ans.push_back(to_find);
                break;
            }
        }

        if (!ans.size())
        {
            for (ll i = l; i <= min(1000000 + l, r); i++)
            {
                if ((i << 1) > r || (i << 2) > r)
                    break;
                ll to_find = i ^ (i << 1) ^ (i << 2);
                if (to_find <= r)
                {
                    ans.push_back(i);
                    ans.push_back(i << 1);
                    ans.push_back(i << 2);
                    ans.push_back(to_find);
                    break;
                }
            }
        }

        if (ans.size())
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
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
        ll n, l, r;
        cin >> n >> l >> r;

        bool flag = true;

        vector<ll> ans;
        for (ll i = 1; i <= n; i++)
        {
            if (l % i == 0)
                ans.push_back(l);
            else if (r % i == 0)
                ans.push_back(r);
            else
            {
                ll divide = l / i;
                ll num = i * (divide + 1);
                if (num > r)
                    flag = false;
                else
                    ans.push_back(num);
            }
        }

        if (flag)
        {
            cout << "YES\n";
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}
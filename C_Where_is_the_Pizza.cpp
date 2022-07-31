// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), d(n), done(n + 1), pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        if (d[i] == 0)
            flag = false;
        else
            done[d[i]] = 1;
    }
    if (flag)
    {
        cout << 1 << endl;
        return;
    }

    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            continue;
        if (done[a[i]] || done[b[i]])
            continue;

        int curr = b[i];
        flag = false;
        vector<int> v;
        v.push_back(a[i]);

        while (curr != a[i])
        {
            v.push_back(curr);
            curr = b[pos[curr]];
            if (done[curr])
                flag = true;
        }

        if (flag == false)
            ans = (2 * ans) % mod;

        for (auto &it : v)
            done[it] = 1;
    }

    cout << ans << endl;    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
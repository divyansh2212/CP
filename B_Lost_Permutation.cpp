// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int m, s, mx = -1;
    cin >> m >> s;

    vector<int> b(m);
    vector<int> hsh(1e5, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        hsh[b[i]]++;
        mx = max(mx, b[i]);
    }

    for (int i = 1; i <= 1e5; i++)
    {
        if (hsh[i])
            continue;
        if (s - i >= 0)
            s -= i;
        else if (s == 0)
        {
            if (i < mx)
                cout << "NO\n";
            else
                cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
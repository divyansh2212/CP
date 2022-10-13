// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int as = 0, bs = 0, cs = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            as++;
        if (s[i] == 'b')
            bs++;
        if (s[i] == 'c')
            cs++;
        if (t[i] == 'a')
            as--;
        if (t[i] == 'b')
            bs--;
        if (t[i] == 'c')
            cs--;
    }

    if (as != 0 || bs != 0 || cs != 0)
    {
        cout << "NO\n";
        return;
    }

    string s_without_b = "", t_without_b = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'b')
            s_without_b.push_back(s[i]);
        if (t[i] != 'b')
            t_without_b.push_back(t[i]);
    }

    if (s_without_b != t_without_b)
    {
        cout << "NO\n";
        return;
    }

    vector<int> sa, ta, sc, tc;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            sa.push_back(i);
        else if (s[i] == 'c')
            sc.push_back(i);
        if (t[i] == 'a')
            ta.push_back(i);
        else if (t[i] == 'c')
            tc.push_back(i);
    }

    for (int i = 0; i < sa.size(); i++)
    {
        if (sa[i] > ta[i])
        {
            cout << "NO\n";
            return;
        }
    }

    for (int i = 0; i < sc.size(); i++)
    {
        if (sc[i] < tc[i])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
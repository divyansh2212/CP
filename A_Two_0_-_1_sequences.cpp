// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    string a, b;
    cin >> a;
    cin >> b;

    if (m > n)
    {
        cout << "NO\n";
        return;
    }

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
            j++;
        i++;
    }

    if (j != m)
    {
        cout << "NO\n";
        return;
    }

    if (b.length() <= 1)
    {
        cout << "YES\n";
        return;
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    bool flag = true;
    for (int i = 0; i < b.length() - 1; i++)
        if (a[i] != b[i])
            flag = false;

    if (flag)
        cout << "YES\n";
    else
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
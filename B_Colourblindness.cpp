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

    string x, y;
    cin >> x;
    cin >> y;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'B')
            x[i] = 'G';
        if (y[i] == 'B')
            y[i] = 'G';
        if (x[i] != y[i])
            flag = false;
    }

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
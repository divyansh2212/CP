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

    vector<ll> a(n + 1), b(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> a[i];

    for (int i = 1; i < n + 1; i++)
        cin >> b[i];

    bool flag = true;
    for (int i = n; i >= 1 && flag; i--)
    {
        if (a[i] == b[i])
            continue;
        if (a[i] > b[i])
            flag = false;
        else if (i != n && b[i + 1] + 1 >= b[i])
            continue;
        else if (i == n && b[1] + 1 >= b[n])
            continue;
        else
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
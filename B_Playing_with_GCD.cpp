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

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> b;
    b.push_back(a[0]);

    for (int i = 0; i < n - 1; i++)
    {
        ll lcm = (a[i] * a[i + 1]) / __gcd(a[i], a[i + 1]);
        b.push_back(lcm);
    }

    b.push_back(a[n - 1]);

    bool flag = true;
    for (int i = 0; i < n; i++)
        if (a[i] != __gcd(b[i], b[i + 1]))
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
// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    bool flag = false;

    if (n % b == 1 || n % b == a || n == 1 || b == 1)
        flag = true;

    ll prev = 1;
    while (prev <= n && flag == false && a != 1)
    {
        if (prev % b == n % b)
            flag = true;
        prev *= a;
    }

    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
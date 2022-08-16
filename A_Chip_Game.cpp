// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;

    bool flag = true;
    // true--- burenka

    if ((m - 1) % 2)
        flag = !flag;
    if ((n - 1) % 2)
        flag = !flag;

    if (!flag)
        cout << "Burenka\n";
    else    
        cout << "Tonya\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
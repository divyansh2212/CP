// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;

    int f_no = x - (n - 1);

    if (f_no <= n && f_no >= 1)
    {
        cout << f_no << " ";
        for (int i = 1; i <= n; i++)
        {
            if (i == f_no)
                continue;
            cout << i << " ";
        }
        cout << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
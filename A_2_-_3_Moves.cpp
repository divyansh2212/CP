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

    if (n == 1)
        cout << 2 << endl;
    else
    {
        int l = n / 6;
        if (n % 6 == 0)
            cout << 2 * l << endl;
        else if (n % 6 <= 2)
            cout << 2 * (l - 1) + 3 << endl;
        else if (n % 6 == 3)
            cout << (2 * l) + 1 << endl;
        else
            cout << (2 * l) + 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
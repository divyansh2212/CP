// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    if ((x != 0 && y != 0) || (x == 0 && y == 0))
    {
        cout << -1 << "\n";
        return;
    }

    if (y == 0)
        swap(x, y);

    if ((n - 1) % y)
    {
        cout << -1 << "\n";
        return;
    }

    int cop = y;
    while (cop--)
        cout << 1 << " ";

    int curr = y + 2;
    for (int i = y + 1; i <= n - 1;)
    {
        cop = y;
        while (cop-- && i <= n - 1)
        {
            cout << curr << " ";
            i++;
        }
        curr += y;
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
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

    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
                cout << i + 1 << " ";
            else
                cout << i - 1 << " ";
        }
    }
    else
    {
        cout << 1 << " ";
        for (int i = 2; i <= n; i++)
        {
            if (i % 2)
                cout << i - 1 << " ";
            else
                cout << i + 1 << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
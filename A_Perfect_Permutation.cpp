// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    if (n % 2)
    {
        cout << n << " ";
        n--;

        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            cout << i + 1 << " ";
        else
            cout << i - 1 << " ";
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
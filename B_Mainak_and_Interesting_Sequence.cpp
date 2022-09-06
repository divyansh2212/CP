// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
#define endl "\n"
const int mod = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;

    if (n == 1)
    {
        cout << "Yes\n";
        cout << m << endl;
        return;
    }
    if (n > m)
    {
        cout << "No" << endl;
        return;
    }

    int curr = m;
    if ((n - 1) % 2 == 0)
    {
        cout << "Yes\n";
        for (int i = 0; i < n - 1; i++, curr--)
            cout << 1 << " ";

        cout << curr << endl;
    }
    else
    {
        curr -= (n - 2);
        if (curr % 2)
            cout << "No" << endl;
        else
        {
            cout << "Yes\n";
            for (int i = 0; i < n - 2; i++)
                cout << 1 << " ";
            cout << curr / 2 << " " << curr / 2 << endl;
        }
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
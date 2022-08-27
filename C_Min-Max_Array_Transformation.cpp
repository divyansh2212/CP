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

    vector<ll> a(n), b(n);

    vector<int> groups[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<ll> dmin(n);

    int bi = 0, ai = 0;
    while (ai < n)
    {
        if (b[bi] - a[ai] >= 0)
        {
            dmin[ai] = b[bi] - a[ai];
            groups[bi].push_back(ai);
            ai++;
        }
        else
            bi++;
    }

    vector<ll> dmax(n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (groups[i].size() == 1)
        {
            dmax[i] = b[i] - a[groups[i][0]];
        }
        else
        {
            for (int j = i; j >= 0; j--)
                dmax[j] = b[i] - a[j];
            break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << dmin[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << dmax[i] << " ";
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
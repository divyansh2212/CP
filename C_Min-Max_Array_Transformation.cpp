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

    vector<ll> a(n), b(n), dmin(n), dmax(n);

    vector<int> groups[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    list<ll> numbers;
    int bptr = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        while (bptr >= 0 && b[bptr] >= a[i])
        {
            numbers.push_back(b[bptr]);
            bptr--;
        }

        dmin[i] = numbers.back() - a[i];
        dmax[i] = numbers.front() - a[i];

        ll a_used = n - i, b_used = n - (bptr + 1);

        if (a_used == b_used)
        {
            numbers.clear();
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
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

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll moves = 1e18;
    for (int i = 0; i < n; i++)
    {
        ll curr = 0;
        vector<ll> b(n);
        b[i] = 0;

        for (int j = i - 1; j >= 0; j--)
        {
            ll divide = (b[j + 1] / arr[j]) + 1;
            b[j] = divide * arr[j];
            curr += divide;
        }

        for (int j = i + 1; j < n; j++)
        {
            ll divide = (b[j - 1] / arr[j]) + 1;
            b[j] = divide * arr[j];
            curr += divide;
        }
        moves = min(moves, curr);
    }
    cout << moves << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
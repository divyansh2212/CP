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

    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i > 0 && x == arr.back())
            continue;
        arr.push_back(x);
    }

    if (arr.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    int changes = 0;

    ll mxv, mnv;
    mxv = arr[0] + x, mnv = arr[0] - x;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - x > mxv || arr[i] + x < mnv)
        {
            changes++;
            mnv = arr[i] - x;
            mxv = arr[i] + x;
        }
        else
        {
            if (arr[i] - x > mnv)
                mnv = arr[i] - x;
            if (arr[i] + x < mxv)
                mxv = arr[i] + x;
        }
    }
    cout << changes << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
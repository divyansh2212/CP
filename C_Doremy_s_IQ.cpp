// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n), bad;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > q)
            bad.push_back(i);
    }

    ll lo = 0, hi = (int)bad.size() - 1, mid;
    if (hi == -1)
    {
        for (int i = 0; i < n; i++)
            cout << 1;
        cout << endl;
        return;
    }

    ll ans = n;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        ll flag = 1, curr_iq = q;

        for (int i = bad[mid]; i < n; i++)
        {
            if (curr_iq == 0)
                flag = 0;
            if (arr[i] > curr_iq)
                curr_iq--;
        }

        if (flag)
            ans = bad[mid], hi = mid - 1;
        else
            lo = mid + 1;
    }

    for (int i = 0; i < ans; i++)
    {
        if (arr[i] <= q)
            cout << 1;
        else
            cout << 0;
    }
    for (int i = ans; i < n; i++)
        cout << 1;

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
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    ll maxm = 0, idx = 0;
    for (int i = 1; i <= n - 1; i++)
        if (arr[i] > arr[i + 1] && arr[i] - arr[i + 1] > maxm)
            maxm = arr[i] - arr[i + 1], idx = i;

    while (q--)
    {
        int i, x;
        cin >> i >> x;

        // ll prev = arr[i];
        arr[i] = x;

        if (i == idx || i == idx + 1)
        {
            maxm = 0;
            ll maxm = 0, idx = 0;
            for (int j = 1; j <= n - 1; j++)
                if (arr[j] > arr[j + 1] && arr[j] - arr[j + 1] > maxm)
                    maxm = arr[j] - arr[j + 1], idx = j;
        }

        cout << maxm << "\n";
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
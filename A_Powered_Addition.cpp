// <-------------------- Jai Shree Babosa -------------------->

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

    ll i, maxi = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            maxi = max(maxi, arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << ceil(log2(maxi + 1)) << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
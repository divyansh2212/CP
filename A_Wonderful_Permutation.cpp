// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> hsh(n + 1, 0);
    for (int i = 0; i < k; i++)
        hsh[arr[i]]++;

    int ans = 0;
    for (int i = 1; i <= k; i++)
        if (hsh[i])
            ans++;
    cout << k - ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
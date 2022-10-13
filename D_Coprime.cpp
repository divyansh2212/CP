// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> maxIndex(1001, -1);
    int mx = -1, mn = inf;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxIndex[arr[i]] = i;
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    ll ans = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = mn; j <= mx; j++)
        {
            if (maxIndex[j] == -1 || ((i + 1 + maxIndex[j] + 1) < ans) || __gcd(arr[i], j) > 1)
                continue;
            ans = 0LL + i + 1LL + maxIndex[j] + 1LL;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
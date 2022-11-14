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

    vector<int> hash(1001, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hash[x] = i + 1;
    }

    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) > 1 || hash[i] == 0 || hash[j] == 0)
                continue;
            ans = max(ans, hash[i] + hash[j]);
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
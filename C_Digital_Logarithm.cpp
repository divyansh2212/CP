// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n;

    int ans = 0;

    vector<int> a(10, 0), b(10, 0);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (mp[x] > 0)
            mp[x]--;
        else
        {
            if (x > 9)
                ans++, b[(int)log10(x) + 1]++;
            else
                b[x]++;
        }
    }

    for (auto &it : mp)
    {
        if (it.first > 9)
            ans += it.second, a[(int)log10(it.first) + 1] += it.second;
        else
            a[it.first] += it.second;
    }

    for (int i = 2; i < 10; i++)
        ans += max(a[i], b[i]) - min(a[i], b[i]);

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
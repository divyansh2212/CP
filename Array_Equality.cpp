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

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    bool flag = false;
    for (auto &it : mp)
        if (it.second > (n + 1) / 2)
            flag = true;

    if (flag)
        cout << "No\n";
    else
        cout << "Yes\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
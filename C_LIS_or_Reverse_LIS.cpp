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

    // vector<int> arr(n), cpy(n);
    map<int, int> mp;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        if (mp[x] > 2)
            ans--;
    }

    cout << (ans + 1) / 2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
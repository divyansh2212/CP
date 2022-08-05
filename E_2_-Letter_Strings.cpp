// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool static cmp(string &a, string &b)
{
    return a[0] <= b[0];
}
bool static cmp2(string &a, string &b)
{
    return a[1] <= b[1];
}

void solve()
{
    int n;
    cin >> n;

    ll ans = 0;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        string temp = s;
        for (char c = 'a'; c <= 'k'; c++)
        {
            if (c == s[1])
                continue;
            temp[1] = c;
            ans += mp[temp];
        }

        temp = s;
        for (char c = 'a'; c <= 'k'; c++)
        {
            if (c == s[0])
                continue;
            temp[0] = c;
            ans += mp[temp];
        }

        mp[s]++;
    }
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
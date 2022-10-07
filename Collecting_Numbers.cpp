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

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i;
    }

    int i = 1, lastIdx = -1, ans = 1;
    while (i <= n)
    {
        while (i <= n && mp[i] > lastIdx)
        {
            lastIdx = mp[i];
            i++;
        }
        if (i <= n)
            ans++, lastIdx = -1;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}
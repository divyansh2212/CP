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

    // vector<ll> a(n);
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<ll> b(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];

    sort(b.begin(), b.end());
    ll ele1 = -1, ele2 = -1;
    int cnt = 0;
    for (auto &it : mp)
    {
        if (cnt == 2)
            break;
        if (cnt == 0)
            ele1 = it.first;
        else
            ele2 = it.first;
        cnt++;
    }
    map<ll, int> mp2 = mp;
    // checking by ele1
    if (ele2 < b[0] && ele2 != -1)
    {
        // cout << ele2 << "\n";
        bool flag = true;
        ll x = b[0] - ele2;
        for (int i = 0; i < n - 1 && flag; i++)
        {
            if (mp[b[i] - x] > 0)
                mp[b[i] - x]--;
            else
                flag = false;
        }
        if (flag)
        {
            cout << x << "\n";
            return;
        }
    }

    // checking by ele1
    if (ele1 < b[0] && ele1 != -1)
    {
        // cout << ele1 << "\n";
        bool flag = true;
        ll x = b[0] - ele1;
        for (int i = 0; i < n - 1 && flag; i++)
        {
            if (mp2[b[i] - x] > 0)
                mp2[b[i] - x]--;
            else
                flag = false;
        }
        if (flag)
        {
            cout << x << "\n";
            return;
        }
    };
    // cout << -1 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
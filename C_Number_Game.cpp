// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool check(map<int, int> mp, ll mid, int &n)
{
    int total = n;
    for (int round = 1; round <= mid; round++)
    {
        if (total == 0)
            return false;
        bool flag = false;
        for (int j = mid - round + 1; j >= 0; j--)
        {
            if (mp[j] > 0)
            {
                total--, mp[j]--, flag = true;
                if (total > 0)
                {
                    for (int k = 0; k <= n * n; k++)
                    {
                        if (mp[k] > 0)
                        {
                            mp[k]--;
                            mp[k + mid - round + 1]++;
                            break;
                        }
                    }
                }
                break;
            }
        }
        if (!flag)
            return flag;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    // multiset<ll> st;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
        if (check(mp, i, n))
            ans = i;

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
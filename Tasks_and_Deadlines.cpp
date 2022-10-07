// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool static comparator(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> pairs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }

    sort(pairs.begin(), pairs.end());

    ll time = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        time += pairs[i].first;
        ans += (pairs[i].second - time);
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}
// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, d;
    cin >> n >> d;

    vector<pair<ll, ll>> arr(n);
    set<ll> st;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(), arr.end());

    ll ans = arr[0].second, curr = 0, i = 0, j = 0;

    while (j < n)
    {
        curr += arr[j].second;
        st.insert(arr[j].first);
        mp[arr[j].first]++;
        ll maxm = *st.rbegin(), minm = *st.begin();
        if (maxm - minm < d)
            ans = max(ans, curr);
        else
        {
            while (maxm - minm >= d)
            {
                curr -= arr[i].second;
                mp[arr[i].first]--;
                if (mp[arr[i].first] == 0)
                    st.erase(arr[i].first);
                i++;
                maxm = *st.rbegin(), minm = *st.begin();
            }
            ans = max(ans, curr);
        }
        j++;
    }

    cout << ans;
}
int main()
{
    solve();
    return 0;
}
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> st;
    map<int, int> mp;

    ll i = 0, j = 0, ans = 0;

    while (j < n)
    {
        st.insert(arr[j]);
        mp[arr[j]]++;
        if (st.size() <= k)
            ans += (j - i + 1);
        while (st.size() > k && i <= j)
        {
            mp[arr[i]]--;
            if (mp[arr[i]] == 0)
                st.erase(arr[i]);
            if (st.size() <= k)
                ans += (j - i);
            i++;
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
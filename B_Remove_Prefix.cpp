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

    vector<int> hsh(n + 1, 0);
    vector<int> arr;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        hsh[x]++;
        if (hsh[x] > 1)
            st.insert(x);
    }

    reverse(arr.begin(), arr.end());
    int ans = 0;
    while (st.size())
    {
        ans++;
        int x = arr.back();
        hsh[x]--;
        arr.pop_back();
        if (hsh[x] == 1)
            st.erase(x);
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
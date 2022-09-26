// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k, d;
    cin >> n >> k >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> st;
    map<int, int> mp;

    int i = 0, j = 0, ans = k;

    while (j < n)
    {
        st.insert(arr[j]);
        mp[arr[j]]++;

        if (j - i + 1 == d)
        {
            if (ans > st.size())
                ans = st.size();
            mp[arr[i]]--;
            if (mp[arr[i]] == 0)
                st.erase(arr[i]);
            i++;
        }
        j++;
    }
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
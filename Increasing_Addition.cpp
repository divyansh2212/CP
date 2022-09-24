// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    multiset<int> st;
    for (int i = 1; i <= n - 1; i++)
        st.insert(arr[i + 1] - arr[i]);

    while (q--)
    {
        int i, x;
        cin >> i >> x;

        if (i + 1 <= n)
        {
            auto it = st.find(arr[i + 1] - arr[i]);
            if (it != st.end())
                st.erase(it);
        }
        if (i - 1 >= 1)
        {
            auto it = st.find(arr[i] - arr[i - 1]);
            if (it != st.end())
                st.erase(it);
        }

        arr[i] = x;

        if (i + 1 <= n)
            st.insert(arr[i + 1] - arr[i]);
        if (i - 1 >= 1)
            st.insert(arr[i] - arr[i - 1]);

        int val = *st.begin();

        if (val < 0)
            cout << abs(val) << "\n";
        else
            cout << 0 << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
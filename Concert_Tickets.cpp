// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m, x;
    cin >> n >> m;

    // vector<int> ticketsPrice(n);
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        auto it = st.upper_bound(x);
        if (it == st.begin())
            cout << -1 << "\n";
        else
        {
            --it;
            cout << *it << "\n";
            st.erase(it);
        }
    }
}
int main()
{
    solve();
    return 0;
}
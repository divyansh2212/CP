// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int x, n, p;
    cin >> x >> n;

    set<int> positions;
    positions.insert(0);
    positions.insert(x);
    multiset<int> st;
    st.insert(x);
    for (int i = 0; i < n; i++)
    {
        cin >> p;   
        auto it1 = positions.upper_bound(p);
        int idx1 = *it1;
        auto it2 = --it1;
        int idx2 = *it2;
        auto it = st.find(idx1 - idx2);
        positions.insert(p);
        st.erase(it);
        st.insert(idx1 - p);
        st.insert(p - idx2);
        auto ans = --st.end();
        cout << *ans << " ";
    }
}
int main()
{
    solve();
    return 0;
}
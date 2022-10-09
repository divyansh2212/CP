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

    vector<int> positions;
    positions.push_back(0);
    positions.push_back(x);
    set<int> st;
    st.insert(x);
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        int idx1 = upper_bound(positions.begin(), positions.end(), p) - positions.begin();
        int idx2 = idx1 - 1;
        auto it = st.find(positions[idx1] - positions[idx2]);
        positions.push_back(p);
        sort(positions.begin(), positions.end());
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
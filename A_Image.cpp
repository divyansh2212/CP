// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    string a, b;
    cin >> a;
    cin >> b;

    unordered_set<char> st;
    for (int i = 0; i < 2; i++)
        st.insert(a[i]);
    for (int i = 0; i < 2; i++)
        st.insert(b[i]);

    cout << st.size() - 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
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

    vector<int> arr(n), hsh(101, 0);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
        hsh[arr[i]]++;
    }

    if (st.size() > k)
    {
        cout << -1 << "\n";
        return;
    }

    vector<int> elements;
    for (auto &it : st)
        elements.push_back(it);

    int left = k - elements.size();
    for (int i = 1; i <= 100 && left > 0; i++)
        if (hsh[i] == 0)
            elements.push_back(i), left--;

    cout << elements.size() * n << "\n";
    for (int i = 0; i < n; i++)
        for (auto &x : elements)
            cout << x << " ";
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
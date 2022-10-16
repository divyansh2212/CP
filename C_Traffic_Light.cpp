// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    if (c == 'g')
    {
        cout << 0 << "\n";
        return;
    }

    s += s;
    vector<int> cidx, gidx;

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] == c)
            cidx.push_back(i);
        else if (s[i] == 'g')
            gidx.push_back(i);
    }

    for (int i = s.length() / 2; i < s.length(); i++)
        if (s[i] == 'g')
            gidx.push_back(i);

    int k = 0, ans = 0;
    for (int i = 0; i < cidx.size(); i++)
    {
        while (k < gidx.size() && gidx[k] < cidx[i])
            k++;
        ans = max(ans, gidx[k] - cidx[i]);
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
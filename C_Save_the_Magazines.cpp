// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> lids(n);
    for (int i = 0; i < n; i++)
        cin >> lids[i];

    ll ans = 0;
    int j = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1')
            continue;
        j = max(j, i + 1);
        while (j < n && s[j] == '1')
        {
            if (lids[j] <= lids[i])
            {
                s[i] = '1', s[j] = '0';
                break;
            }
            j++;
        }
    }

    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            ans += lids[i];
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
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

    string ans = s;

    for (int i = 0; i < n; i++)
    {
        string curr = s;
        for (int j = 0, k = i; k < n; j++, k++)
            curr[k] = max(curr[j], curr[k]);
        ans = max(ans, curr);
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}